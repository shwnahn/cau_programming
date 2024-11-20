/*
 * 전처리 (SWAP)
 */

#include <stdio.h>

/* 매크로함수로 정의하여 사용 */
// 중괄호로 묶으면 변수의 생성과 소멸은 해당 블록에서만 유효하다.
#define SWAP(x, y) { int temp = x; \
                     x = y;        \
                     y = temp; }

int main(void) {
    int x = 100; int y = 200;

    printf("before x(%d), y(%d)\n", x, y);
    SWAP(x, y);
    printf("after1 x(%d), y(%d)\n", x, y);
    SWAP(x, y);
    printf("after2 x(%d), y(%d)\n", x, y);
return 0;
    }