#include <stdio.h>

int main(int argc, char **argv) {
    int N;
    while (1) {
        scanf("%d", &N);
        if (N == 0) break;
        printf("Sum of 1~%d is %d\n", N, get_sum(N));
    }
    return 0;
}

int get_sum(int N) {
    int i;
    static int sum = 0; // static은 한 번만 초기화되고, 프로그램이 종료될 때까지 값이 유지됨
    for (i = 1; i <= N; i++)
        sum += i;       // 따라서 static 변수 sum은 이전 호출 결과 값에 계속 누적
    return sum;
}