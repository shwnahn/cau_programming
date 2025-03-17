#include <stdio.h>

int main (int argc, char **argv) {
    int sum = 0;
    while (1) {
        int N;
        int i;
        scanf("%d", &N);
        for (i = 1; i <= N; i++)
            sum += i;
    }
    printf("Sum of 1~%d is %d\n", N, sum);
    
    return 0;
}