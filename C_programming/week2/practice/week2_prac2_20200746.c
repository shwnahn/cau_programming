#include <stdio.h>

int main(void) {
    int number;
    int sum;
    int divisor;

    while (1) {
        // 입력값 받기
        
        printf("Enter a number: ");
        scanf("%d", &number);
        
        if (number == 0) break;
        if (number < 100) continue;

        sum = 0; // sum 초기화
        divisor = 10000; // divisor 초기화

        for (int i = 0; i<5; i++){
            // printf("number: %d\n", number);
            // printf("divisor: %d\n", divisor);
            // printf("나머지: %d\n", number%divisor);
            // printf("몫: %d\n", number/divisor);
            sum += number/divisor;
            // printf("Sum: %d\n", sum);
            number = number%divisor;
            // printf("Changed number:%d\n", number);
            divisor /= 10;
        }
        printf("Sum of digits: %d\n", sum);
        
        if (sum % 2 == 0) {
            printf("Sum is even\n");
        } else {
            printf("Sum is odd\n");
        }
    }
    printf("Exit program");
    return 0;
}