#include <stdio.h>

void print_times_table(void) {\
    int i, j;
    for (i = 2; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d*%d:%2d | ", i, j, i * j);
        }
        printf("\n");
    }
}

int main(void) {
    print_times_table();
    return 0;
}