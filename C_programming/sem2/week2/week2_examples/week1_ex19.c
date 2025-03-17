#include <stdio.h>

int main(void) {
    int input;

label1:
    printf("Input\n");
    do {
        scanf("%d", &input);

        if (input == 100)
            break;
        if (input > 100)
            goto label1;
        if (input % 2 == 0)
            continue;

        printf("You entered %d\n", input);
    } while (1);

    printf("End\n");

    return 0;
}
