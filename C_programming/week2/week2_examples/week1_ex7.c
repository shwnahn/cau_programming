#include <stdio.h>

int main(void) {
    int a = 10; int b = 3; float c = 3.0;

    printf("       a / (float)b: %.2f\n", a / (float)b);  // b를 float로 형변환하면?
    printf("(float)a /        b: %.2f\n", (float)a / b);  // a를 float로 형변환하면?

    printf("       a /   (int)c: %d\n", a / (int)c);  // c를 int로 형변환하면?

    printf("\n(float)(a/b): %.2f\n", (float)(a/b));  // a/b를 먼저 계산하고 float로 형변환하면?

    return 0;
}