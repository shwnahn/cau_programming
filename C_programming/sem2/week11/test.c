#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1 = 20;
    int *numPtr1;

    numPtr1 = &num1;

    void *numPtr2;
    numPtr2 = malloc(sizeof(int));

    printf("%p\n", numPtr1);
    printf("%p\n", numPtr2);

    free(numPtr2);

    return 0;
}