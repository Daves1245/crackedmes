#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    char key[] = "\t5#\t?%\x13\"13;54\x1d" "5";
    for (int i = 0; i < strlen(key); i++) {
        printf("%c", key[i] ^ 0x50);
    }
    puts("");
    return 0;
}
