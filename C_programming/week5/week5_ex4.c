/*
 * 배열파라미터의 변경가능 여부?
 */

#include <stdio.h>

// 배열을 파라미터로 받았다. 변경 가능할까?
void change_arr_parameter(int param[]) {
    printf("before:0x%p\n", param);
    param = 10;
    printf(" after:0x%p\n", param);
}

int main(void) {
    int array[5] = { 22, 11, 26, 12, 23 };
    int *arr_p = array;

    // array = 10; // 배열은 변경 불가능하다. 컴파일 에러가 발생한다.
    // arr_p = 10; // 포인터는 변경 가능하다.
    printf("=== pointer ===\n");
    change_arr_parameter(arr_p); // 포인터를 매개변수로 받으니까 변경 가능하겠지?
    printf("=== array ===\n");
    change_arr_parameter(array); // 배열을 매개변수로 받으니까 변경이 불가능하겠지?

    return 0;
}