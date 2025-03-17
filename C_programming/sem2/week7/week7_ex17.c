/*
 * 문자열 복사
 */

#include <stdio.h>
#include <string.h> // 문자열을 다루는 함수를 사용하기 위해 포함(include)

int main (void) {
    char str1[13] = "Hello World";
    char str2[13];
    char str3[5];

    // 문자열 복사 (strcpy 함수: 두 번째 문자열의 내용을 첫 번째 문자열로 복사)
    printf("==== Copy ====\n");
    strcpy(str2, str1);
    printf("str1(%s) // str2(%s)\n", str1, str2);

    // 주의: str3의 크기가 5이므로, 문자열의 길이가 5를 넘어가면 메모리를 초과하여 위험
    // strcpy(str3, str1);
    // printf("str1(%s) // str3(%s)\n", str1, str3);

    // 문자열 복사 (strncpy 함수: 두 번째 문자열의 내용을 첫 번째 문자열로 복사, 두 번째 인자로 복사할 문자의 개수 지정)
    printf("\n==== Copy ====\n");
    /* 
     * 목적지 배열의 최대 크기만큼으로 지정해 주는 것이 안전.
     * 문자열의 끝에 NULL 문자를 넣어주기 위해 배열의크기-1 (sizeof(str3)-1)
     */
    strncpy(str3, str1, sizeof(str3)-1);
    printf("str1(%s) // str3(%s)\n", str1, str3);

    return 0;
}