#include <stdio.h>

int main(void) {
    // 2차원 배열은 행-열 순서로 크기를 지정
    int arr_2d[2][3] = {30, 44, 67, 87, 43}; 
    printf("sizeof(arr_2d): %lu\n", sizeof(arr_2d)/sizeof(int));
    printf("| %2d | %2d | %2d |\n", arr_2d[0][0], arr_2d[0][1], arr_2d[0][2]);
    printf("| %2d | %2d | %2d |\n", arr_2d[1][0], arr_2d[1][1], arr_2d[1][2]);
    printf("sizeof(arr_2d[0]): %lu\n", sizeof(arr_2d[0])/sizeof(int));
    printf("sizeof(arr_2d[1]): %lu\n", sizeof(arr_2d[1])/sizeof(int));

    // 행끼리 다시 중괄호로 묶어서 구분 가능. 또한 여러줄에 걸쳐서 작성 가능.
    int arr2_2d[2][3] = {
                        {30, 44, 67},
                        {87, 43}
                       };
    printf("sizeof(arr2_2d): %lu\n", sizeof(arr2_2d)/sizeof(int));
    printf("| %2d | %2d | %2d |\n", arr2_2d[0][0], arr2_2d[0][1], arr2_2d[0][2]);
    printf("| %2d | %2d | %2d |\n", arr2_2d[1][0], arr2_2d[1][1], arr2_2d[1][2]);

    // 중괄호 하나만 사용하는 것보다, 행마다 중괄호를 사용하는 것이 가독성이 좋음
    int arr3_2d[2][3] = {
                        {30, 44},   // 이 경우 첫 번째[0] 행의 세 번째[2] 열의 값이 0으로 초기화
                        {67, 87, 43}
                       };
    printf("sizeof(arr3_2d): %lu\n", sizeof(arr3_2d)/sizeof(int));
    printf("| %2d | %2d | %2d |\n", arr3_2d[0][0], arr3_2d[0][1], arr3_2d[0][2]);
    printf("| %2d | %2d | %2d |\n", arr3_2d[1][0], arr3_2d[1][1], arr3_2d[1][2]);

    return 0;
}