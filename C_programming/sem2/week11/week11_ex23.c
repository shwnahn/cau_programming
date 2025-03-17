/*
 * 메모리 관련 함수 (sizeof(malloc))
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 배열포인터! char 타입 20개를 저장할 수 있는 배열에 대한 포인터 --> 문자열에 대한 포인터
    char (*malloc_p)[20] = (char (*)[20])malloc(5 * sizeof(char[20])); // 20바이트 문자열 데이터를 5개 저장할 수 있는 동적 메모리를 할당

    // malloc_p는 어쨌든 "포인터변수"이다.
    // 따라서 sizeof(malloc_p)는 동적으로 할당받은 메모리의 크기가 아닌 포인터 변수의 크기를 반환한다.
    printf("sizeof(malloc_p): %lu\n", sizeof(malloc_p));

    // 잊지말자 free!!
    free(malloc_p);

    return 0;
}