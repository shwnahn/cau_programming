#include <stdio.h>

int main(void) {
    char a = 39; // 00100111
    char b = 78; // 01001110

    printf("a & b  : %d\n", a & b);
    printf("a | b  : %d\n", a | b);
    printf("~a     : %d\n", ~a);
    printf("a ^ b  : %d\n", a ^ b);

    a = 11; // 00001011
    b = 3;

    printf("a << b : %d\n", a << b);
    printf("a >> b : %d\n", a >> b);

    return 0;
}
