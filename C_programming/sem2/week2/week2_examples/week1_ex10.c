#include <stdio.h>

int main(void)
{
    int rank;
    scanf("%d", &rank);

    printf("Your grade: ");
    if (rank <= 20) {
        printf("A\n");
    }
    else if (rank <= 36) {
        printf("B\n");
    }
    else {
        printf("C~\n");
    }

    return 0;
}