/*
 * 전처리 (SWAP)
 */

#include <stdio.h>

int main(void) {
    int x = 100;    int y = 200;

    printf("before x(%d), y(%d)\n", x, y);
    
    // 2개의 변수를 서로 교환하는 방법은?
    int temp = x;   // 임시변수를 생성하여 값을 저장한다.
    x = y;
    y = temp;

    printf("after  x(%d), y(%d)\n", x, y);
    return 0;
}