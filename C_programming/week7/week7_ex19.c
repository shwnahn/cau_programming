/*
 * 문자열 분리
 */

#include <stdio.h>
#include <string.h> // 문자열을 다루는 함수를 사용하기 위해 포함(include)

int main (void) {
    char str[] =
        "Hello Everyone~How are you?Nice to meet you!My name is Mingyu Park";

    char delim[] = "!~?";

    // delim 문자열에 포함된 문자 중 하나를 만나면 문자열을 자름 (해당 문자를 NULL문자로 대체)
    char *token = strtok(str, delim); // 자른 부분의 시작 주소 값을 반환
    printf("=== Content ===\n");
    printf("%s\n", token);
    printf("%s\n", str);

    token = strtok(str, delim); // strtok의 첫 번째 인자가 다시 str로 바뀌었으므로, str의 시작 주소 값부터 찾기 시작
    printf("=== Content ===\n");
    printf("%s\n", token);
    printf("%s\n", str);

    return 0;
}