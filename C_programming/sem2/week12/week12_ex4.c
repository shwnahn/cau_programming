/*
 * 전처리 (#define, 매크로함수 #1)
 */

#include <stdio.h>

// 매크로함수 정의
#define ADD(x, y) x + y


int main(void) {
    int a = 10, b = 20;
    int result;

    // 매크로함수 호출
    result = ADD(a, b); // 이 문장은
  //result = a + b; // 이 문장으로 대체된다.
    printf("result: %d\n", result);

    return 0;
}