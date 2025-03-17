/*
 * 전처리 (#define, 매크로함수 #3)
 */

#include <stdio.h>

// 매크로함수 정의
#define MUL(x, y) (x * y) // 어떻게 바꿔야할까?


int main(void) {
    double a = 10.0, b = 20.0;
    double result;

    // 매크로함수 호출
    result = 300 / MUL(a, b); // MUL 함수의 결과로 나누고 싶다.

    // 결과는?
    printf("result: %lf\n", result);

    return 0;
}