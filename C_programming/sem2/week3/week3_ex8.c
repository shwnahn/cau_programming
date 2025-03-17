#include <stdio.h>

void print_N_times_table(int N) {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d*%d: %d\n", N, i, N * i);
    }
}

int main(void) {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    print_N_times_table(N);
    return 0;
}