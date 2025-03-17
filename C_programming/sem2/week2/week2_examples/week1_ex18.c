#include <stdio.h>

int main(void) {
    int input;
    do {
        scanf("%d", &input);
        if (input % 2 == 0)
            continue;
        if (input == 100)
            break;
        printf("You entered %d\n", input);
    } while (1);
    printf("End\n");

    return 0;
}