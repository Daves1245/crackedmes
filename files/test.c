#include <stdio.h>

#define byte char

int verify(char *a) {
    byte arr[20] = {0, 3, 2, 1, 2, 2, 2, 7, 4, 1, 2, 1, 0, 1, 2, 1, 7, 4, 0, 4};
    int e = 0, o = 0;
    for (int i = 0; i < 20; i++) {
        if (arr[i] & 7 != a[i] & 7) {
            return 0;
        }
        if (i & 1) o += a[i];
        else e += a[i];
    }
    return e == 0x35d && o == 0x381;
}

int main() {
    for 
}
