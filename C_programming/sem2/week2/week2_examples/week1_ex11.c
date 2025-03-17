#include <stdio.h>

int main(void) {
    int n_not_submit;
    int rank;

    printf("실습 미제출 횟수: ");
    scanf("%d", &n_not_submit);

    printf("등수: ");
    scanf("%d", &rank);
    
    if (n_not_submit <= 2 && rank <= 20) {
        printf("A+\n");
        printf("축하합니다!\n");
    }

    return 0;
}