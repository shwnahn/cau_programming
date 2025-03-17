/*
 * 전처리 (#define, 매크로함수 #2)
 */

#include <stdio.h>

// 매크로함수 정의
#define ADD(x, y) (x + y)


int main(void) {
    int a = 10, b = 20;
    int result;

    // 매크로함수 호출
    result = ADD(a, b) * 10; // ADD 함수의 결과에 10을 곱하고 싶다.

    // 결과는?
    printf("result: %d\n", result);

    return 0;
}