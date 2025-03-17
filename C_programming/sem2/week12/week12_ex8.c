/*
 * 전처리 (#define, 매크로함수 #5)
 */

#include <stdio.h>

// 매크로함수 정의
#define min(x, y) ( (x) < (y) ? (x) : (y) )


int main(void) {
    double a = 4.0, b = 6.0;
    double c = 5.0, d = 15.0;

    /* 매크로함수에 정의된 내용이 전처리 단계에서 코드로 대체되니까
       당연히 아래처럼 작성할수도 있다. (함수의 사용법과 유사하다.) */
    printf("result: %lf\n", min(a+b, c+d));

    return 0;
}