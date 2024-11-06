/*
 * 디버깅 예제
*/

#include <stdio.h>

void myadd(int *p3, int n3);
void myadd_and_pow(int *p2, int n2);

int main(void) {
    int *p;
    p = 10;    // 포인터 변수 p에 메모리주소 10을 가리키도록 한다.
    printf("first statement\n");
    myadd_and_pow(p, 5);
    printf("second statement\n");

    return 0;
}

void myadd_and_pow(int *p2, int n2) {
    myadd(p2, n2);
    *p2 = *p2 * *p2;
}

void myadd(int *p3, int n3) {
    *p3 = *p3 + n3;
}