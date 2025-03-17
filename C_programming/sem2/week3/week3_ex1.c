#include <stdio.h>

int main(void) {
    unsigned short input; // 항상 양수이며 60,000 이하의 값이 입력된다.
    unsigned short sum;   // 따라서 각 자리 숫자의 합도 60,000 이하의 양수이다.
    while (1) {
        printf("Enter a number: ");
        scanf("%u", &input);        // 사용자에게 숫자를 입력
        if (input == 0) break;      // 0을 입력하면 프로그램 종료
        if (input < 100) continue;  // 100 미만의 수는 무시

        sum = 0;                // 매반복마다 새롭게 값을 구하기 위해, sum을 0으로 초기화
        /* 각자리의 숫자합을 구하기 위해, 1의 자리 숫자를 추출하고 (10으로 나눈 나머지),
           10으로 나누어 1의자리 숫자를 제거 (int/int=int, 소수점 이하 버림)
           해당 과정을 0이 될 때까지 반복 */
        while (input > 0) {
            sum += input % 10;  // 1의 자리 숫자를 추출하여 sum에 더함
            input /= 10;        // 1의 자리 숫자를 제거 (int/int = int, 소수점 이하 버림)
        }
        printf("Sum of digits: %u\n", sum); // 각 자리 숫자의 합 출력
        if (sum % 2 == 0) {                 // 홀수/짝수 판별
            printf("Sum is even\n");
        } else {
            printf("Sum is odd\n");
        }
    }
    printf("Exit program\n");

    return 0;
}
