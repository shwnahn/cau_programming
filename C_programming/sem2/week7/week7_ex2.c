/*
 * 2개의 문자의 입력과 출력 (ASCII Code)
 */

#include <stdio.h>

int main(void) {
    char ch1, ch2;

    // 첫 번째 문자 입력
    scanf("%c", &ch1);
    // 첫 번째 입력받은 문자와 ASCII Code (정수) 출력
    printf("1'st input character: %2c\n", ch1);
    printf("1'st ascii code number: %2d\n", ch1);

    // 두 번째 문자 입력
    scanf("%c", &ch2);
    // 두 번째 입력받은 문자와 ASCII Code (정수) 출력
    printf("2'nd input character: %2c\n", ch2);
    printf("2'nd ascii code number: %2d\n", ch2);
    
    return 0;
}