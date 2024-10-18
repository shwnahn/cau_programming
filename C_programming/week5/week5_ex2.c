/*
 * 배열을 파라미터로 갖는 함수의 동작
 */

#include <stdio.h>

// 배열타입이다. 포인터가 아니니까 주소가 아닌 값에 의한 호출이 일어나겠지?
void sum_to_arr(int arr[], int N) {
    int i;
    for (i = 0; i < 5; i++)
        arr[i] += N;
}

void print_arr(int arr[]) {
    int i;
    printf("arr:");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void) {
    int array[5] = { 22, 11, 26, 12, 23 };

    print_arr(array);
    // 배열을 파라미터로 받으니까 값에 의한 호출이 일어나겠지?
    sum_to_arr(array, 10);
    // 그러니까 원본 배열이 변경되지 않겠지?
    print_arr(array);

    return 0;
}