/*
 * 문자열의 이름이 나타내는 값
 */

#include <stdio.h>

int main (void) {
    char str1[13] = "Hello World";
    char str2[13] = "Hello World";

    // 문자열은 문자로 이루어진 "배열"이며, 배열의 이름은 배열의 시작 주소 값.
    printf("==== Address ====\n");
    printf("str1(%p) // str2(%p)\n", str1, str2);   // %p: 포인터의 주소 값 출력

    // %s는 해당 주소로 "가서" NULL 문자를 만날 때까지 출력하라는 의미
    printf("\n==== Content ====\n");
    printf("str1(%s) // str2(%s)\n", str1, str2); // 따라서 인덱스도, *연산자도 사용하지 않는다.

    return 0;
}