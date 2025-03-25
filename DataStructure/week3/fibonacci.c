#include <stdio.h>

int fib(int n);

int main() {
    printf("%d\n",fib(4));
    return 0;
}

int fib(int n) {
    int mem[1000] = {0, 1, };
    
    if (n < 2 || mem[n] != 0) { // 이미 구한 경우
        return mem[n];
    }
    else { // 처음 구하는 경우
        mem[n] = fib(n-1) + fib(n-2);
        return mem[n];
    }
}