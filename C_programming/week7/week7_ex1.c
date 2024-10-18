/*
 * 문자의 입력과 출력 (ASCII Code)
 */

#include <stdio.h>

int main(void) {
    char ch1;
    scanf("%c", &ch1);

    printf("1'st input character: %2c\n", ch1);
    printf("1'st ascii code number: %2d\n", ch1);
    printf("1'st ascii code number(in hex): %2x\n", ch1);
    
    return 0;
}