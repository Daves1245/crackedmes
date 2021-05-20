#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    for (int i = 0; i < atoi(argv[1]); i++) {
        if ((i % 0x3e9) == 0xaa) {
            printf("%d\n", i);
        }
    } 
}
