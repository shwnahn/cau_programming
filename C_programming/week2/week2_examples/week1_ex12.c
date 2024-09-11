#include <stdio.h>

int main() {
    int absences, n_not_submit, total_score;

    printf("결석 횟수: ");
    scanf("%d", &absences);

    printf("실습 미제출 횟수: ");
    scanf("%d", &n_not_submit);

    printf("총점: ");
    scanf("%d", &total_score);

    if (absences >= 4 || n_not_submit >= 4 || total_score < 30) {
        printf("F\n");
        printf("다음에 또 볼 수도 있겠네요 또르륵..\n");
    }

    return 0;
}