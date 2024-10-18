/*
 * 포인터를 파라미터로 갖는 함수의 동작
 */

#include <stdio.h>

// 포인터로 주소 값을 받아오고 있다. 참조에 의한 호출이겠네?
void sum_to_arr(int *arr, int N) {
    int i;
    for (i = 0; i < 5; i++)
        arr[i] += N;    // 포인터를 배열처럼 접근할 수 있지!
}

void print_arr(int *arr) {
    int i;
    printf("arr:");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);  // 포인터를 배열처럼 접근할 수 있지!
    printf("\n");
}

int main(void) {
    int array[5] = { 22, 11, 26, 12, 23 };

    print_arr(array);
    // 배열의 이름은 곧 주소! 주소를 넘겨주는 거니까 참조에 의한 호출이겠지?
    sum_to_arr(array, 10);
    // 그러니까 원본 배열이 변경되겠지?
    print_arr(array);

    return 0;
}