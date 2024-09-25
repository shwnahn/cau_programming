#include <stdio.h>

int intpow(int x, int n) {
    int i, ret = 1;
    for (i = 0; i < n; i++)
        ret = ret * x;
    return ret;
}

int main (void) {
    int x = 2, n = 10;
    int ret;
    ret = intpow(4, 4);

    printf("%d^%d = %d\n", x, n, ret);

    return 0;
}