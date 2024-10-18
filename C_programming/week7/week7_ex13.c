/*
 * 문자열 비교
 */

#include <stdio.h>

int main (void) {
    char str1[13] = "Hello World";
    char str2[13] = "Hello World";

    // 각 문자열의 크기 비교
    printf("==== Size ====\n");
    printf("str1(%d) // str2(%d)\n",
            sizeof(str1), sizeof(str2));

    // 각 문자열의 내용 출력
    printf("\n==== Content ====\n");
    printf("str1(%s) // str2(%s)\n", str1, str2);

    // 그럼 두 문자열은 같은가?
    printf("\n==== Compare ====\n");
    if (str1 == str2) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}