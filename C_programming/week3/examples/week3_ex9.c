#include <stdio.h>

int get_sum(int start, int stop, int step) {
    int i;
    int sum = 0;
    for (i = start; i <= stop; i += step) {
        sum += i;
    }
    return sum;
}

int main(void) {
    int option;
    while (1) {
        printf("Enter an option (1-4): ");
        scanf("%d", &option);

        if (option == 1) {
            int N, sum;
            printf("Enter N: ");
            scanf("%d", &N);
            sum = get_sum(0, N, 1);
            printf("Sum from 0 to %d is %d\n", N, sum);
        } else if (option == 2) {
            int start, stop, sum;
            printf("Enter start and stop: ");
            scanf("%d %d", &start, &stop);
            sum = get_sum(start, stop, 1);
            printf("Sum from %d to %d is %d\n", start, stop, sum);
        } else if (option == 3) {
            int start, stop, step, sum;
            printf("Enter start, stop, and step: ");
            scanf("%d %d %d", &start, &stop, &step);
            sum = get_sum(start, stop, step);
            printf("Sum from %d to %d with step %d is %d\n", start, stop, step, sum);
        } else if (option == 4) {
            printf("Exit program\n");
            break;
        } else {
            printf("Invalid option\n");
        }
    }

    return 0;
}