/*
 * 문자열의 초기화
 */

#include <stdio.h>

int main (void) {
    // str1은 큰 따옴표로 묶어서 문자열 생성
    char str1 [10] = "Hello";
    // str2는 일반적인 배열 선언 방식으로 문자열 생성
    char str2 [10] = {'H', 'e', 'l', 'l', 'o'};

    // 각 문자열 출력
    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}
