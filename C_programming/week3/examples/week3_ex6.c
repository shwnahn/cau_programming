#include <stdio.h>

int main(void) {
    int option;
    while (1) {
        printf("Enter an option (1-4): ");
        scanf("%d", &option);

        if (option == 1) {
            int i, N;
            int sum = 0;
            printf("Enter N: ");
            scanf("%d", &N);
            for (i = 0; i <= N; i++) {
                sum += i;
            }
            printf("Sum from 0 to %d is %d\n", N, sum);
        } else if (option == 2) {
            int start, stop, i;
            int sum = 0;
            printf("Enter start and stop: ");
            scanf("%d %d", &start, &stop);
            for (i = start; i <= stop; i++) {
                sum += i;
            }
            printf("Sum from %d to %d is %d\n", start, stop, sum);
        } else if (option == 3) {
            int start, stop, step, i;
            int sum = 0;
            printf("Enter start, stop, and step: ");
            scanf("%d %d %d", &start, &stop, &step);
            for (i = start; i <= stop; i += step) {
                sum += i;
            }
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