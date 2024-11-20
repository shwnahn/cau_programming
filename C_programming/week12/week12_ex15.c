/*
 * 전처리 (SWAP)
 */

#include <stdio.h>

/* 매크로함수로 정의하여 사용 */
// 중괄호로 묶으면 변수의 생성과 소멸은 해당 블록에서만 유효하다.
#define SWAP(x, y) do { int temp = x; \
                        x = y;        \
                        y = temp; } while(0)

int main(void) {
    int x = 100;    int y = 200;

    // 컴파일에러가 발생하는데... 왜 그럴까?
    if (x > y)
        SWAP(x, y);
    else
        printf("x(%d) is not greater than y(%d)\n", x, y);

    return 0;
}