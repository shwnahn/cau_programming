/*
 * 문자 포인터 vs 문자열
 */

#include <stdio.h>

int main (void) {
    char *str2 = "Hello"; // 포인터"변수"에 문자열(상수들)을 생성 후 주소를 저장
    
    printf("Before:%s\n", str2);
    str2 = "World!";    // str2는 포인터"변수"이므로 다른 메모리 주소를 가리킬 수 있다.
    printf("After:%s\n", str2);

    return 0;
}