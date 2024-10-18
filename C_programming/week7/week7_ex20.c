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
    printf("=== 1st ===\n");
    printf("%s\n", token);

    // token의 시작주소로부터 현재 잘라진 문자열의 길이만큼 더해주면 다음 문자열의 시작 주소
    token = strtok(token + strlen(token) + 1, delim);
    printf("=== 2nd ===\n");
    printf("%s\n", token);

    // 반복?
    while (1) {
        token = strtok(token + strlen(token) + 1, delim);
        if (token == NULL) {
            printf("NULL!!");
            break;
        }
        printf("=== Next ===\n");
        printf("%s\n", token);
    }

    return 0;
}