#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;

    printf("a + b: %d\n", a + b);
    printf("a - b: %d\n", a - b);
    printf("a * b: %d\n", a * b);
    printf("a / b: %d\n", a / b);   // int와 int의 연산 결과는 int (정수)
    printf("a %% b: %d\n", a % b);

    printf("++a  : %d\n", ++a);
    printf("a++  : %d\n", a++);
    printf("--a  : %d\n", --a);
    printf("a--  : %d\n", a--);
    printf("a    : %d\n", a);

    return 0;
}
