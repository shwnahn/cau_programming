/*
 * 문자 포인터 vs 문자열
 */

#include <stdio.h>

int main (void) {
    char str1[] = "Hello"; // 배열을 만들고 문자열을 저장
    char *str2  = str1; // 배열의 시작주소를 포인터로 가리킴 (따라가면 변수들)
    
    // 배열을 가리키는 포인터는? 따라가면 배열 (연속된 변수들)이므로 변경이 가능하다.
    printf("Before:%s\n", str2);
    str2[1] = 'a'; // 따라서 변경이 가능, 코드가 실행된다.
    printf("After:%s\n", str2);

    return 0;
}