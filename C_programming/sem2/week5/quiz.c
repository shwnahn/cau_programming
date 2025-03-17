#include <stdio.h>
int main(void) {
    int i, j;
    int score[2][3] = {{0x30, 0x44, 0x67}, {0x87, 0x43}};

    // 포인터배열을 사용하여 2차원 배열을 가리키기 위해서는?
    int *p_arr[2] = { score[0], score[1] };

    // 배열포인터를 사용하여 2차원 배열을 가리키기 위해서는?
    int (*arr_p)[3] = score;

    // 포인터배열의 크기 vs 배열포인터의 크기
    printf("포인터배열: %d, 배열포인터 %d", sizeof(p_arr), sizeof(arr_p));

    // 포인터배열의 원소의 크기 vs 배열포인터의 원소의 크기
    printf("[원소] 포인터배열: %d, 배열포인터 %d", sizeof(p_arr[0]), sizeof(arr_p[0]));

    // 각 원소의 접근은? --> 똑같다!
    printf("\n============ access each element ============\n");
    for (i = 0; i < 3; i++)
        printf("score[0][%d]:%x, int_p_arr[0][%d]:%x, int_arr_p[0][%d]:%x\n", i, score[0][i], i, p_arr[0][i], i, int_arr_p[0][i]);
    for (i = 0; i < 3; i++)
        printf("score[1][%d]:%x, int_p_arr[1][%d]:%x, int_arr_p[1][%d]:%x\n", i, score[1][i], i, p_arr[1][i], i, int_arr_p[1][i]);

    return 0;
}