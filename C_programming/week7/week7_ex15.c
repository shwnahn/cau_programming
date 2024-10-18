/*
 * 문자열 비교
 */

#include <stdio.h>
#include <string.h> // 문자열을 다루는 함수를 사용하기 위해 포함(include)

int main (void) {
    char str1[13] = "Hello World";
    char str2[13] = "Hello World";

    char abc[13] = "ABC";
    char xyz[13] = "XYZ";

    // 딱 문자열의 크기만큼 사용하려면 []만 사용해도 된다. (배열의 선언에서 특성을 기억!)
    char str3[] = "Hello Programming";

    // // 문자열은 문자로 이루어진 "배열"이며, 배열의 이름은 배열의 시작 주소 값.
    // printf("==== Address ====\n");
    // printf("str1(%p) // str2(%p)\n", str1, str2);   // %p: 포인터의 주소 값 출력

    // // 두 문자열이 같다면 출력 값은?
    // printf("===== Compare \"%s\" <-> \"%s\" =====\n", str1, str2);
    // printf("strcmp(str1, str2):%d\n", strcmp(str1, str2));

    // // 같으면 함수의 반환 값이 0이니까... if문을 다시 작성해보자!
    // if (strcmp(str1, str2) == 0) {
    //     printf("Same\n");
    // } else {
    //     printf("Different\n");
    // }

    // // 앞 문자열이 뒷 문자열보다 ASCII Code 기준 앞에 있다면 출력 값은?
    // printf("===== Compare \"%s\" <-> \"%s\" =====\n", abc, str1);
    // printf("strcmp(abc, str1):%d\n", strcmp(abc, str1));

    // // 앞 문자열이 뒷 문자열보다 ASCII Code 기준 뒤에 있다면 출력 값은?
    // printf("===== Compare \"%s\" <-> \"%s\" =====\n", xyz, str1);
    // printf("strcmp(xyz, str1):%d\n", strcmp(xyz, str1));

    // str1과 str3는 다르다
    printf("===== Compare \"%s\" <-> \"%s\" =====\n", str1, str3);
    printf("strcmp(str1, str3):%d\n", strcmp(str1, str3));

    // 하지만 앞 5글자(Hello)까지는 같다 (정확히는 띄어쓰기 포함 6글자)
    printf("===== Compare first 5 characters of \"%s\" <-> \"%s\" =====\n", str1, str3);
    printf("strncmp(str1, str3, 5):%d\n", strncmp(str1, str3, 5));

    return 0;
}