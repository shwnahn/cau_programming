/*
 * 문자열 입력
 */

#include <stdio.h>

int main (void) {
    char str[13]; // 최대 12글자만 받을 수 있다. 마지막에 NULL 문자를 받아야 하니까..
    
    // 주석을 해제하며 실행해보세요.
    
    // scanf 함수를 이용한 문자열 입력
    // scanf("%s", str);
    // printf("(scanf)Input string: %s\n", str);

    // gets 함수를 이용한 문자열 입력
    // gets(str);
    // printf("( gets)Input string: %s\n", str);

    // fgets 함수를 이용한 문자열 입력
    fgets(str, 13, stdin);
    printf("(fgets)Input string: %s\n", str);

    return 0;
}
