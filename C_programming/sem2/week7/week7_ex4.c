/*
 * 문자열의 데이터 크기
 */

#include <stdio.h>

int main(void) {
    // str1은 큰 따옴표로 묶어서 문자열 생성
    char str1[] = "Hello World";
    // str2는 일반적인 배열 선언 방식으로 문자열 생성
    char str2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};

    // 각 문자열의 데이터 크기 출력
    printf("Size of str1: %d\n", sizeof(str1));
    printf("Size of str2: %d\n", sizeof(str2));
    
    return 0;
}