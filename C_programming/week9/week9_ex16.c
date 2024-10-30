/*
 * 열거형의 활용
 */

#include <stdio.h>

void mysum(double my_arr[], int size, int N);
void mysub(double my_arr[], int size, int N);
void mymul(double my_arr[], int size, int N);
void mydiv(double my_arr[], int size, int N);
void mypow(double my_arr[], int size, int N);
void print_arrs(double **arrs, int *size);

// 연산을 enum으로 정의 (0: 덧셈, 1: 뺄셈, 2: 곱셈, 3: 나눗셈, 4: 거듭제곱)
enum ops {
    SUM, SUB, MUL, DIV, POW
};

int main(void) {
    double first_arr[3] = { 20.0, 15.0, 4.0 };
    double second_arr[4] = { 20.22, 10.22 };
    double third_arr[6] = { 24, 1, 12, 23, 12, 22 };
    int op, number;
    int i;         

    int arr_size[3] = { 3, 4, 6 }; // 배열의 크기를 저장하는 배열
    double *p_arrs[3] = { first_arr, second_arr, third_arr };
    
    void (*func_arr[5])(double[], int, int);
    // 각 enum 값 index에 mysum 함수를 연결시켜서 명확하게 표현
    func_arr[SUM] = mysum;
    func_arr[SUB] = mysub;
    func_arr[MUL] = mymul;
    func_arr[DIV] = mydiv;
    func_arr[POW] = mypow;

    for (i = 0; i < 3; i++) {
        while (1) {
            printf("Enter the operation: ");
            scanf("%d", &op);
            if (op >= SUM && op <= POW) // 그리 좋은 표현은 아니지만 속도효율적..
                break;
            if (op == SUM || op == SUB || op == MUL || op == DIV || op == POW)
                break;          // 명확하게 표현할 수 있으나 속도는...?
            
            printf("invalid operation\n");
        }

        while (1) {
            printf("Enter the number: ");
            scanf("%d", &number);
            if (number >= 1)
                break;
            printf("invalid value\n");
        }

        func_arr[op](p_arrs[i], arr_size[i], number);
    }

    print_arrs(p_arrs, arr_size);
    
    return 0;
}

void mysum(double my_arr[], int size, int N) {
    int i;
    for (i = 0; i < size; i++)
        my_arr[i] += N;
}
void mysub(double my_arr[], int size, int N) {
    int i;
    for (i = 0; i < size; i++)
        my_arr[i] -= N;
}
void mymul(double my_arr[], int size, int N) {
    int i;
    for (i = 0; i < size; i++)
        my_arr[i] *= N;
}
void mydiv(double my_arr[], int size, int N) {
    int i;
    for (i = 0; i < size; i++)
        my_arr[i] /= N;
}
void mypow(double my_arr[], int size, int N) {
    int i, j;
    for (i = 0; i < size; i++) {
        double result = 1;
        for (j = 0; j < N; j++)
            result *= my_arr[i];
        my_arr[i] = result;
    }
}
void print_arrs(double **arrs, int *size) {
    int i, j;
    for (i = 0; i < 3; i++) {
        printf("Array %d: ", i + 1);
        for (j = 0; j < size[i]; j++)
            printf("%.2lf ", arrs[i][j]);
        printf("\n");
    }
}
