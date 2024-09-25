#include <stdio.h>

int sum;

void sumFunc(int N) {
    int i;
    for (i = 0; i <= N; i++)
        sum += i;
}

int main(int argc, char **argv) {
    int N;
    sum = 0;
    scanf("%d", &N);
    sumFunc(N);
    printf("Sum of 1~%d is %d\n", N, sum);
    return 0;
}