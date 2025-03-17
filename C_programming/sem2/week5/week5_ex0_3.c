/*
 * 함수의 정의/선언 위치 #2
 */

#include <stdio.h>

// 미리 뼈대만 선언해놓고 나중에 구현해보자
int add_and_pow(int n1, int n2);
int add(int n1, int n2);

int main(void) {
    int ret = add_and_pow(10, 20);  // 아직 정의되지 않았지만 선언은 했으니까 어딘가에 구현되어 있을거야
    printf("result:%d\n",ret);

    return 0;
}

int add_and_pow(int n1, int n2) {
    int ret = add(n1, n2);          // 아직 정의되지 않았지만 선언은 했으니까 어딘가에 구현되어 있을거야
    return ret * ret;
}

int add(int n1, int n2) {
    return n1 + n2;
}