/*
 * 문자 포인터 vs 문자열
 */

#include <stdio.h>

int main (void) {
    char str1[] = "Hello"; // 배열을 만들고 문자열을 저장
    
    printf("Before:%s\n", str1);
    str1 = "World!";    // 배열의 이름은 시작주소 값(상수)이므로 변경 불가능
    printf("After:%s\n", str1);

    return 0;
}