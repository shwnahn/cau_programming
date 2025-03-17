#include <stdio.h>

#define SWAP(a, b) do { int tmp = a;    \
                        a = b;          \
                        b = tmp; } while (0)

int main(void) {
    int x = 100;    int y = 200;

    printf("before x(%d), y(%d)\n", x, y);
    
    SWAP(x, y);
    printf("after1 x(%d), y(%d)\n", x, y);
    
    SWAP(x, y);
    printf("after2 x(%d), y(%d)\n", x, y);
    return 0;
}