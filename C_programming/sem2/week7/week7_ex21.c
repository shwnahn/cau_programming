/*
 * 문자열 분리
 */

#include <stdio.h>
#include <string.h> // 문자열을 다루는 함수를 사용하기 위해 포함(include)

int main (void) {
    char str[] =
        "Hello Everyone~How are you?Nice to meet you!My name is Mingyu Park";

    char delim[] = "!~?";

    char *token = strtok(str, delim);
    while (token != NULL) {
        printf("%s\n", token);
        // 첫 번째 파라미터에 NULL을 넣게되면 이전에 사용한 문자열을 이어서 자르도록 한다.
        token = strtok(NULL, delim);
    }

    return 0;
}