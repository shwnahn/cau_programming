/*
 * 문자 포인터 vs 문자열
 */

#include <stdio.h>

int main (void) {
    char str1[] = "Hello"; // 배열을 만들고 문자열을 저장

    // 배열을 사용한 문자열은? 연속된 메모리 공간(변수)에 문자들을 저장한다.
    printf("Before:%s\n", str1);
    str1[1] = 'a'; // 따라서 변경이 가능, 코드가 실행된다.
    printf("After:%s\n", str1);

    return 0;
}