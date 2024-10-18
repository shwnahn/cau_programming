/*
 * 문자열의 길이 (strlen)
 */

#include <stdio.h>
#include <string.h> // 문자열을 다루는 함수를 사용하기 위해 포함(include)

int main (void) {
    char str1[13] = "Hello";

    // 문자열의 크기 (배열의 크기:해당 배열에 할당된 메모리의 크기)
    printf("==== Size ====\n");
    printf("str1(%d)\n", sizeof(str1));

    // 문자열의 길이 (strlen 함수: NULL 문자를 만날 때까지의 문자의 개수)
    printf("\n==== Length ====\n");
    printf("str1(%d)\n", strlen(str1));

    // // 따라서 중간에 \0을 넣어주면?
    str1[5] = 'X';
    str1[6] = 'h';
    str1[7] = 'i';
    printf("\n==== Length ====\n");
    printf("str1(%d)\n", strlen(str1)); // \0을 만나면 문자열의 끝으로 인식 (뒤에 있는 문자들은 무시)

    printf("\n==== Content ====\n");
    printf("str[0]: %d\nstr[1]: %d\n", str1[0], str1[1]);
    printf("str[5]: %d\nstr[6]: %d\n", str1[5], str1[6]);
    return 0;
}