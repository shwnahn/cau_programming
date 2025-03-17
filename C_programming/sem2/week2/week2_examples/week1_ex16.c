#include <stdio.h>

int main(void) {
    int input;

    scanf("%d", &input);

    while (input < 100) {
        printf("You entered %d\n", input);
        scanf("%d", &input);
    }

    return 0;
}