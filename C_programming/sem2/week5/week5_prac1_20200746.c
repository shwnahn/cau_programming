#include <stdio.h>

/*
 * 주의! 이미 작성된 코드는 절대로 수정하지 않도록 합니다.
 * 다른 라이브러리를 사용하지 마세요. (#include <stdio.h>는 제외)
 */

// my_arr[] 배열의 size 크기만큼의 원소를 N으로 연산하는 함수들
void mysum(double my_arr[], int size, int N); // 덧셈
void mysub(double my_arr[], int size, int N); // 뺄셈
void mymul(double my_arr[], int size, int N); // 곱셈
void mydiv(double my_arr[], int size, int N); // 나눗셈
void mypow(double my_arr[], int size, int N); // 거듭제곱
void print_arrs(double **arrs, int *size); // 배열들을 출력하는 함수

int main(void) {
    // 3개의 배열을 선언하고 초기화
    double first_arr[3] = { 20.0, 15.0, 4.0 };
    double second_arr[4] = { 20.22, 10.22 };
    double third_arr[6] = { 24, 1, 12, 23, 12, 22 };
    int op, number; // 사용자에게 입력으로 받을 정수형 변수
    int i;          // 반복문을 위한 변수

    int arr_size[3] = { 3, 4, 6 }; // 배열의 크기를 저장하는 배열
    /* TODO:각기 다른 크기의 배열을 가리키는 포인터들을 묶어 배열로 만드세요. */
    double *p_arr[3] = { first_arr, second_arr, third_arr}; // 크기가 3인 배열
    
    /* TODO:함수포인터 배열을 선언하고, mysum, mysub, mymul, mydiv, mypow 함수를 가리키도록 초기화하세요. */
    void (*myop[5])(double[], int, int) = { mysum, mysub, mymul, mydiv, mypow }; // 크기가 5인 배열
    // void mypow(double my_arr[], int size, int N); 정의에 맞게 형식 수정

    // 총 3번 반복하면서 사용자로부터 정수와 연산을 입력받아 연산을 수행
    for (i = 0; i < 3; i++) {
        /*
            TODO:op에 연산 옵션을 입력받고, 0~4 사이의 변수인지 확인 
            (0: 덧셈, 1: 뺄셈, 2: 곱셈, 3: 나눗셈, 4: 거듭제곱)
            그렇지 않다면 "invalid operation"을 출력하고 다시 입력 (while문 활용)
         */

        while (1) {
            printf("Enter the operation: ");
            scanf("%d", &op);
            if (op >= 0 && op <= 4) {
                break;
            } else {
                printf("invalid operation\n");
            }
        }
        
        /*
            TODO:number에 연산할 값을 입력받고, 1 이상의 변수인지 확인
            그렇지 않다면 "invalid value"을 출력하고 다시 입력 (while문 활용)
         */
        while(1) {
            printf("Enter the number: ");
            scanf("%d", &number);
            if (number >= 1){
                break;
            } else {
                printf("invalid value\n");
            }
        }
        

        /*
            TODO:입력받은 연산과 값을 이용하여 함수포인터 배열을 이용해 연산을 수행
         */

        myop[op](p_arr[i], arr_size[i], number);
        // B[op](??, ??);
    }


    /*
        TODO:print_arrs 함수를 호출하여 배열들을 출력 (배열을 가리키는 포인터들에 대한 배열?)
    */
    print_arrs(p_arr, arr_size); // 이부분 좀 헷갈림
    return 0;
}

/* TODO:각 함수들의 구현부를 정의하세요. */
/*
 * mysum: my_arr[] 배열의 size 크기만큼의 원소를 N으로 더하는 함수
 *   param
 *     - my_arr: 더할 배열
 *     - size: 배열의 크기
 *     - N: 더할 값
 */
void mysum(double my_arr[], int size, int N) {
    int i;
    for (i = 0; i < size; i++){
        my_arr[i] += N;
    }
}
/*
 * mysub: my_arr[] 배열의 size 크기만큼의 원소를 N으로 빼는 함수
 *   param
 *    - my_arr: 뺄 배열
 *    - size: 배열의 크기
 *    - N: 뺄 값
 */
void mysub(double my_arr[], int size, int N) {
    int i;
    for (i = 0; i < size; i++){
        my_arr[i] -= N;
    }
}
/*
 * mymul: my_arr[] 배열의 size 크기만큼의 원소를 N으로 곱하는 함수
 *   param
 *    - my_arr: 곱할 배열
 *    - size: 배열의 크기
 *    - N: 곱할 값
 */
void mymul(double my_arr[], int size, int N) {
    int i;
    for (i = 0; i < size; i++){
        my_arr[i] *= N;
    }
}
/*
 * mydiv: my_arr[] 배열의 size 크기만큼의 원소를 N으로 나누는 함수
 *   param
 *    - my_arr: 나눌 배열
 *    - size: 배열의 크기
 *    - N: 나눌 값
 */
void mydiv(double my_arr[], int size, int N) {
    int i;
    for (i = 0; i < size; i++){
        my_arr[i] /= N;
    }
}
/*
 * mypow: my_arr[] 배열의 size 크기만큼의 원소를 N으로 거듭제곱하는 함수
 *   param
 *    - my_arr: 거듭제곱할 배열
 *    - size: 배열의 크기
 *    - N: 거듭제곱할 값
 */
void mypow(double my_arr[], int size, int N) {
    // N번 거듭제곱.
    int i, j;
    for (i = 0; i < size; i++){
        int temp = 1;
        for (j = 0; j < N; j++)
            temp *= my_arr[i];
        my_arr[i] = temp;
    }

    // arr[2] = {1, 2}, size = 2, N = 2 가정 시
    // for - i문 2회 반복 i = 0, 1
    // for - j문 2회 반복. temp = 1 * arr[0] * arr[0] = arr[0]^2
}
/*
 * print_arrs: 배열들을 출력하는 함수
 *   param
 *    - arrs: 출력할 배열들에 대한 포인터들
 *    - size: 배열의 크기들
 */
void print_arrs(double **arrs, int *size) {
    int i, j;
    // 포인터배열의 크기는 항상 3이라고 가정
    for (i = 0; i < 3; i++) {
        printf("Array %d: ", i + 1);
        /* 배열내용 출력 */
        for (j = 0; j < size[i]; j++) {
            printf("%.2f ", arrs[i][j]); // 실수 소수점 둘째까지만 - %.2f
        }
        printf("\n");
    }
}