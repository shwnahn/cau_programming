#include <stdio.h>

int main(void) {
    int input;

    do {
        scanf("%d", &input);
        printf("You entered %d\n", input);
    } while (input < 100);

    return 0;
}