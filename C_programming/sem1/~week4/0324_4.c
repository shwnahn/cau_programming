#include <stdio.h>

int main(void){
    double rate;
    int krw;

    printf("환율을 입력하시오: ");
    scanf("%lf", &rate);

    printf("원화 금액을 입력하시오: ");
    scanf("%d", &krw);

    printf("원화 %d원은 %lf달러입니다.\n", krw, krw / rate);
}