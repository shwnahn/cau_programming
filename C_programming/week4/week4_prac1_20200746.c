#include <stdio.h>

// 사용자에게 임의 정수 N 입력받는 함수
int input_N(void){
    int N;
    scanf("%d", &N);
    return N;
}

// 각 배열의 원소에 N을 더하는 함수
void sum_to_array(int *arr_p, int number) {
    int i, j;
    for(i = 0; i < 5; i++)
        arr_p[i] += number;
}

// 각 배열의 원소를 출력하는 함수
void print_array(int *arr_p) {
    int i;
    for(i = 0; i < 5; i++)
        printf("[%d]:%d\n",i, *(arr_p + i));
}

int main(void) {
    int array[5] = {1, 10, 15, 20, 100};
    int N;
    N = input_N();
    sum_to_array(array, N);
    print_array(&array[0]); //&array[0] == array
    return 0;
}