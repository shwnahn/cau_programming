/*
 * 함수의 정의/선언 위치 #1
 */

#include <stdio.h>

int add(int n1, int n2) {
    return n1 + n2;
}

int add_and_pow(int n1, int n2) {
    // add 함수는 사용 전에 정의되어있다.
    int ret = add(n1, n2);
    return ret * ret;
}

int main(void) {
    // add_and_pow 함수는 사용 전에 정의되어있다.
    int ret = add_and_pow(10, 20);
    printf("result:%d\n",ret);

    return 0;
}