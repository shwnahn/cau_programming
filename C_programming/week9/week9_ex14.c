/*
 * 열거형
 */

#include <stdio.h>

// 열거형을 정의하면 맨 앞의 글자부터 0, 1, 2, ... 순서로 값이 할당된다.
enum ops {
    SUM, SUB, MUL, DIV, POW
};

int main(void) {
    enum ops op;    // enum ops 자료'형'이므로 변수도 선언할 때 자료형을 명시해야 한다.
    op = SUM;    printf("op: %d\n", op);
    op = SUB;    printf("op: %d\n", op);
    op = MUL;    printf("op: %d\n", op);
    op = DIV;    printf("op: %d\n", op);
    op = POW;    printf("op: %d\n", op);

    return 0;
}