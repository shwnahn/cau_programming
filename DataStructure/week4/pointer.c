#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    printf("arr: %p, ptr: %p\n", arr, ptr);
    printf("arr + 1: %p, ptr + 1: %p\n", arr + 1, ptr + 1);

    return 0;
}