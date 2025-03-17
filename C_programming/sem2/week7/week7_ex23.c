/*
 * 문자 포인터 vs 문자열
 */

#include <stdio.h>

int main (void) {
    char *str2  = "Hello"; // 문자열(상수들)을 만들고 포인터로 가리킴
    
    // 포인터를 사용한 문자열은? "문자열 상수"를 저장하고, 그 메모리 주소를 가리킨다.
    printf("Before:%s\n", str2);
    str2[1] = 'a'; // 이 코드는 실행되지 않는다.
    printf("After:%s\n", str2);

    return 0;
}