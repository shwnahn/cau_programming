/*
 * 문자열의 길이
 */

#include <stdio.h>

int main (void) {
    char str1[13] = "Hello";

    // 문자열의 크기
    printf("==== Size ====\n");
    printf("str1(%d)\n", sizeof(str1));

    return 0;
}