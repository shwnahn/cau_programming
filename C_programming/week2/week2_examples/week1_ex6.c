#include <stdio.h>

int main(void) {
    int a = 10; int b = 3; float c = 3;
    printf("a / b: %d\n", a / b);  // int와 int의 연산 결과는 int (정수)
    printf("a / c: %f\n", a / c);  // int와 float의 연산 결과는 float (실수)
    printf("a / c: %.2f\n", a / c);  // 소수점 둘째자리까지 출력

    // 3과 3.0은 엄연히 다른 데이터 타입이다.
    printf("=================\n");
    printf("a /   3: %d\n", a / 3);  // 3은 int이므로 결과는 int
    printf("a / 3.0: %.2f\n", a / 3.0);  // 3.0은 float이므로 결과는 float

    return 0;
}