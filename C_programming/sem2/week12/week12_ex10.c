/*
 * 전처리 (SWAP)
 */

#include <stdio.h>

// 매크로함수로 정의하여 사용
#define SWAP(x, y) int temp = x;\
                    x = y;\
                    y = temp;

int main(void) {
    int x = 100;    int y = 200;

    printf("before x(%d), y(%d)\n", x, y);
    
    SWAP(x, y); // 소스코드가 어떻게 대체될지 머리속으로 그려보자

    printf("after  x(%d), y(%d)\n", x, y);
    return 0;
}