#include <stdio.h>

int main(void) 
{
    int number;

    // 10진수로 입력받아서 10진수로 출력
    printf("Enter a number in decimal: ");
    scanf("%d", &number);
    printf("decimal: %d\n", number);

    // 16진수로 입력받아서 10진수로 출력
    printf("Enter a number in hexadecimal: ");
    scanf("%x", &number);    // 16진수로 입력
    printf("decimal: %d\n", number);

    // 8진수로 입력받아서 10진수로 출력
    printf("Enter a number in octal: ");
    scanf("%o", &number);    // 8진수로 입력
    printf("decimal: %d\n", number);

    return 0;
}