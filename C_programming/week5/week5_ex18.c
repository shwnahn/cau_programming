/*
 * api & callback function
 */

#include <stdio.h>

// 예제의 이해를 위해 main함수 위에 정의까지 전부 구현해 놓았습니다.

/*** 사칙연산 함수들 ***/
int myadd(int n1, int n2) { return n1 + n2; } // 덧셈
int mysub(int n1, int n2) { return n1 - n2; } // 뺄셈
int mymul(int n1, int n2) { return n1 * n2; } // 곱셈
int mydiv(int n1, int n2) { return n1 / n2; } // 나눗셈

/*** 무언가를 출력하는 함수들 ***/
// 배열의 원소들을 출력
void print_arr(int *arr, int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("arr[%d]:%d\n", i, arr[i]);
}
// 배열의 원소들의 합을 출력
void print_sum_of_elements(int *arr, int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++)
        sum += arr[i];
    printf("sum:%d\n", sum);
}

// 배열의 원소들을 연산하고 callback action을 수행
/* Parameter
    * arr: 배열 (int포인터, int *arr)
    * size: 배열의 크기 (int, int size)
    * N: 연산에 사용할 숫자 (int, int N)
    * op: 연산 함수 (함수포인터, int (*op)(int, int))
    * callback_action: 연산 후 수행할 함수 (함수포인터, void (*callback_action)(int *, int))
 */
void op_to_arr(int *arr, int size, int N, int (*op)(int, int), void (*callback_action)(int *, int)) {
    int i;
    for (i = 0; i < size; i++)
        arr[i] = op(arr[i], N); // 함수포인터를 이용하여 연산 (어떤 연산인지는 op_to_arr 함수 입장에서 알 필요 없음)
    callback_action(arr, size); // 함수포인터를 이용하여 callback action 수행 (어떤 action인지는 op_to_arr 함수 입장에서 알 필요 없음)
}

int main(void) {
    int array[5] = { 22, 11, 26, 12, 23 };

    /* 모든 원소에 100 덧셈 연산 후 모든 원소를 출력하려면? */
    // op_to_arr에게 덧셈 연산(myadd)과 원소 출력(print_arr)을 수행하라고 요청
    op_to_arr(array, 5, 100, myadd, print_arr);

    /* 모든 원소에 10 뺄셈 연산 후 원소의 합을 출력하려면? */
    // op_to_arr에게 뺄셈 연산(mysub)과 원소의 합 출력(print_sum_of_elements)을 수행하라고 요청
    op_to_arr(array, 5, 10, mysub, print_sum_of_elements);

    /* TODO: 모든 원소에 2 곱셈 연산 후 모든 원소를 출력하려면? */

    /* TODO: 모든 원소에 7 나눗셈 연산 후 원소의 합을 출력하려면? */

    return 0;
}