/*
 * 배열파라미터의 크기?
 */

#include <stdio.h>

// 배열을 파라미터로 받았다. 그 크기는?
void sizeof_arr_parameter(int param[]) {
    printf("sizeof(param): %d\n", sizeof(param));
}

int main(void) {
    int array[5] = { 22, 11, 26, 12, 23 };
    int *arr_p = array;

    printf("sizeof(array): %d\n", sizeof(array));   // 20
    printf("sizeof(arr_p): %d\n", sizeof(arr_p));   // 8
    printf("pointer //");
    sizeof_arr_parameter(arr_p); // 포인터를 매개변수로 받으니까 포인터의 크기인 8이 출력되겠지?
    printf("array //");
    sizeof_arr_parameter(array); // 배열을 매개변수로 받으니까 배열의 크기인 20이 출력되겠지?

    return 0;
}