#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

FILE *fin;
FILE *fout;

int main(int argc, char **argv) {
    char o_name[1024] = {0};
    if (argc != 2) {
        printf("usage: %s [filename]\n", argv[0]);
        return 1;
    }
    strncpy(o_name, argv[1], sizeof strlen(argv[1]));
    o_name[strlen(argv[1]) - strlen(".corona")] = '\0';

    if (!(fin = fopen(argv[1], "rb"))) {
        perror("fopen");
        return -1;
    }
    if (!(fout = fopen(o_name, "wb"))) {
        printf("error opening decrypted file\n");
        return -2;
    }

    int c;
    while ((c = fgetc(fin)) != EOF) {
        fputc(c ^ 0x000000000000005c, fout);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}
