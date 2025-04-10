#include <stdio.h>

int main(void){
    double value;

    printf("실수값을 입력하세요: ");
    scanf("%lf", &value);
    printf("결과값: %.3lf\n", value);

}