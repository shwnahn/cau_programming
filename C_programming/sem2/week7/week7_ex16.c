/*
 * 문자열 복사
 */

#include <stdio.h>

int main (void) {
    char str1[13] = "Hello World";
    char str2[13];

    str2 = str1; // 배열의 이름은? 배열의 시작 주소 "값(상수)"이다.

    return 0;
}