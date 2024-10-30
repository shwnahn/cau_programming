/*
 * 열거형
 */

#include <stdio.h>

// 열거형의 값을 지정하면 그 값부터 순서대로 1씩 증가한다.
enum ops {
    SUM=2, SUB, MUL, DIV=10, POW
};

// 따라서 각 값마다 개별적으로 값을 지정해줄 수 있다.
enum ops2 {
    hop_by_hop=0, IGMP=2, TCP=6, UDP=17
};

int main(void) {
    enum ops op;
    op = SUM;    printf("op: %d\n", op); // ADD는 2로 지정했다.
    op = SUB;    printf("op: %d\n", op); // SUB는?
    op = MUL;    printf("op: %d\n", op); // MUL은?
    op = DIV;    printf("op: %d\n", op); // DIV는 10으로 지정했다.
    op = POW;    printf("op: %d\n", op); // POW는?

    int next_hdr;   // 다음헤더가 무엇인지 나타내는 변수
    if (next_hdr == hop_by_hop) {   // enum도 어쨌든 "정수형"이다. 따라서 비교가 가능하다.
        printf("Next header is hop-by-hop option header.\n");
    } else if (next_hdr == IGMP) {
        printf("Next header is IGMP.\n");
    } else if (next_hdr == TCP) {
        printf("Next header is TCP.\n");
    } else if (next_hdr == UDP) {
        printf("Next header is UDP.\n");
    }
    // --> 숫자를 외울 필요없이 enum으로 처음 지정해주고 사용하면 가독성과 능률이 높아진다.


    return 0;
}