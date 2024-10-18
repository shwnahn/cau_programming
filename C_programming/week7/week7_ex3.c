/*
 * 2개의 문자의 입력과 출력 #2 (ASCII Code)
 */

#include <stdio.h>

int main(void) {
    char ch1, ch2;

    // 첫 번째 문자 입력
    scanf(" %c", &ch1); // %c 앞에 띄어쓰기가 존재하면, 공백 문자(띄어쓰기, 탭, 줄바꿈 등)를 무시
    // 첫 번째 입력받은 문자와 ASCII Code (정수) 출력
    printf("1'st input character: %2c\n", ch1);
    printf("1'st ascii code number: %2d\n", ch1);

    // 두 번째 문자 입력
    scanf(" %c", &ch2); // %c 앞에 띄어쓰기가 존재하면, 공백 문자(띄어쓰기, 탭, 줄바꿈 등)를 무시
    // 두 번째 입력받은 문자와 ASCII Code (정수) 출력
    printf("2'nd input character: %2c\n", ch2);
    printf("2'nd ascii code number: %2d\n", ch2);
    
    return 0;
}