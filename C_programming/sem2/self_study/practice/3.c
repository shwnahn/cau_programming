#include <stdio.h>

/* 배열 초기화 예제 */
int main(void) {
    // 배열의 크기를 지정하고, 초기화를 하지 않으면 배열의 값은 dummy value
    int arr1[5] = {0};
    printf("sizeof(arr1): %lu\n", sizeof(arr1)/sizeof(int));
    printf("sizeof(arr1): %lu\n", sizeof(arr1));
    printf("sizeof(int): %lu\n", sizeof(int));
    printf("%d\n", arr1[0]);
    printf("%d\n", arr1[1]);
    printf("%d\n", arr1[2]);
    printf("%d\n", arr1[3]);
    printf("%d\n", arr1[4]);

    // // 배열의 크기를 지정하고, 값을 다 채우지 않으면 나머지 값은 0으로 초기화
    // int arr2[5] = {98, 88, 92};
    // printf("sizeof(arr2): %lu\n", sizeof(arr2)/sizeof(int));
    // printf("%d\n", arr2[0]);
    // printf("%d\n", arr2[1]);
    // printf("%d\n", arr2[2]);
    // printf("%d\n", arr2[3]);
    // printf("%d\n", arr2[4]);

    // int arr3[] = {98, 88, 92, 95, 70}; 
    // // 배열의 크기를 지정하지 않으면, 초기화 값의 개수만큼 배열의 크기가 자동으로 지정
    // printf("sizeof(arr3): %lu\n", sizeof(arr3)/sizeof(int));
    // printf("%d\n", arr3[0]);
    // printf("%d\n", arr3[1]);
    // printf("%d\n", arr3[2]);
    // printf("%d\n", arr3[3]);
    // printf("%d\n", arr3[4]);

    return 0;
}