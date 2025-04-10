#include <stdio.h>

int main(void){
    int price;
    int money;

    printf("물건 값을 입력하시오: ");
    scanf("%d", &price);
    printf("투입한 금액을 입력하시오: ");
    scanf("%d", &money);

    int change = money - price;
    printf("거스름돈은 다음과 같습니다.\n");
    printf("천원권: %d장\n", change / 1000);
    printf("오백원 동전: %d개\n", (change % 1000) / 500);
    printf("백원 동전: %d개\n", (change % 500) / 100);

    return 0;
}

// 편의점에서 물건을 구입하고 만 원을 냈을 때, 거스름돈의 액수와 점원이
// 지급해야 할 거스름돈을 화폐와 동전수를 계산하는 프로그램을 작성해보
// 자.
// 물건 값을 입력하시오: 8600
// 투입한 금액을 입력하시오: 10000
// 거스름돈은 다음과 같습니다.
// 천원권: 1장
// 오백원 동전: 0개
// 백원 동전: 4개