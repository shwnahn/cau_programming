#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, j, k;
int main(void) {
    // 1차원배열
    int *p_c = (int *)malloc(sizeof(int) * 12);
    for (i = 0; i < 12; i++) {
        p_c[i] = 0;
    }
    memset(p_c, 0, sizeof(int) * 12);

    int **p_d = (int **)malloc(sizeof(int *) * 4);
    for (i = 0; i < 4; i++) {
        p_d[i] = (int *)malloc(sizeof(int) * 3);
        if (p_d[i] == NULL) {
            printf("ERROR");
            return 0;
        }
        memset(p_d[i], 0, sizeof(int) * 3);
    }


    for (i = 0; i < 4; i++) {
        free(p_d[i]);
    }
    free(p_d);


    /*
    데이터가 작은 번지수의 비어있는 메모리부터 순차적으로 저장된다고 가정하자.
    어떤 프로그램에서 동적할당을 통해 메모리를 사용하고자 한다.
    할당받은 힙(heap) 메모리의 시작 주소가 10진수로 10000(1만)이라고 가정할 때,
    각 프로그램이 종료되기 직전에 프로그램에서 사용하고 있는 변수에 담긴 값을 구하시오.
    (각 프로그램은 독립적이며, 각각의 문제마다 초기 상태(주소 10000)부터 다시 시작한다고 가정한다.)
    */

    void *p1, *p2, *p3, *p4, *p5;
    
    p1 = malloc(sizeof(short));
    p2 = malloc(sizeof(double));

    free(p1);
    p3 = malloc(sizeof(char));
    p4 = malloc(sizeof(char));
    p5 = malloc(sizeof(char));
    return 0;
}
/*
할당받은 힙 메모리가 10000
각 프로그램이 종료되기 직전 사용하고 있는 변수에 담긴 값.
p1 할당... malloc 2바이트 -> 10000 ~ 10002
p2 할당... malloc 8바이트 -> 10002 ~ 10010
p1 free... 다시 10000? 아닌가?
p3 char.. 1바이트 10000에 할당하게되나? -> 10000~10001
p4 char 1바이트 -> 10001~10002
p5 char 1바이트 -> 10010~10011

10000 / 10002 / 10000 / 10001 / 10010
p1은 할당되지 않는다!!

*/

