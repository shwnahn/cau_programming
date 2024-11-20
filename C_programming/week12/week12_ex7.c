/*
 * 전처리 (#define, 매크로함수 #4)
 */

#include <stdio.h>

// 매크로함수 정의
#define MUL(x, y) ((x) * (y))


int main(void) {
    double a = 4.0, b = 6.0;
    double c = 5.0, d = 15.0;
    double result;

    // 이번에는 매크로 함수를 호출할 때 연산이 들어갔다.
    result = 300 / MUL(a+b, c+d);

    // 결과는?
    printf("result: %lf\n", result);

    return 0;
}