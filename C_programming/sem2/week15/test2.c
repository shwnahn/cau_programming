#include <stdio.h>

void swap1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    int *ptr1 = &x;
    int *ptr2 = &y;

    printf("Before swap: ptr1 points to %d, ptr2 points to %d\n", *ptr1, *ptr2);
    swap(&ptr1, &ptr2);
    printf("After swap: ptr1 points to %d, ptr2 points to %d\n", *ptr1, *ptr2);

    return 0;
}