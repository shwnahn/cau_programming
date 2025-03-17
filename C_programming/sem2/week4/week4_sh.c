#include <stdio.h>

int main(void) {
    int a = 10; 
    int b = 20;
    int temp;

    printf("a :%d, b :%d\n", a, b); // before

    int *a_ptr = &a;
    int *b_ptr = &b;

    temp = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = temp;

    printf("a :%d, b :%d\n", a, b); // after
}