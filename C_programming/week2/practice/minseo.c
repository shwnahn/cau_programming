#include <stdio.h>

void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void printCross(int n) {
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == n - 1 || j == n - 1) {
                printf("+ ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void printX(int n) {
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || i + j == size - 1) {
                printf("x ");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int option, n;
    do {
        printf("Select option:");
        scanf("%d", &option);

        if (option == 0) {
            printf("Bye bye~\n");
            break;
        }

        switch (option) {
            case 1:
                printf("Enter a number:");
                scanf("%d", &n);
                if (n > 0) {
                    printTriangle(n);
                } else {
                    printf("Invalid input\n");
                }
                break;
            case 2:
                printf("Enter a number:");
                scanf("%d", &n);
                if (n > 0) {
                    printCross(n);
                } else {
                    printf("Invalid input\n");
                }
                break;
            case 3:
                printf("Enter a number:");
                scanf("%d", &n);
                if (n > 0) {
                    printX(n);
                } else {
                    printf("Invalid input\n");
                }
                break;
            default:
                printf("Invalid option\n");
                break;
        }
    } while (option != 0);

    return 0;
}
