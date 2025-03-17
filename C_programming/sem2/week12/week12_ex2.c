/*
 * 전처리 (#define, 매크로상수 #2)
 */

#include <stdio.h>

/* 표준을 낮춰서 테스트해보자 */
/* gcc -o week12_ex2.exe week12_ex2.c -std=c90 -pedantic-errors */

#define MAX_ARR_SIZE 10

int main(void) {
    int i;
    int myarr[MAX_ARR_SIZE] = {0}; /* 배열의 크기를 매크로상수로 정의 */
    /* 이건 배열의 크기에 변수를 넣는 것이 아니다!
       매크로"상수"를 사용하는 것이다. 따라서 가변길이배열(VLA)이 아니다.
       이전 표준 및 대부분의 컴파일러에서 동작이 가능하다. */

    for (i = 0; i < MAX_ARR_SIZE; i++)
        myarr[i] = i;

    for (i = 0; i < MAX_ARR_SIZE; i++)
        printf("myarr[%d]: %d\n", i, myarr[i]);

    return 0;
}
