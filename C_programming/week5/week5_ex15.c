/*
 * 포인터배열 vs 배열포인터
 */

#include <stdio.h>

int main(void) {
    int i, j;
    // 2차원 배열 선언
    int score[2][3] = {{0x30, 0x44, 0x67}, {0x87, 0x43}};

    // 포인터배열을 사용하여 2차원 배열을 가리키기 위해서는?
    int *int_p_arr[2] = { score[0], score[1] }; // int형 포인터 변수들의 배열, int 포인터 배열

    // 배열포인터를 사용하여 2차원 배열을 가리키기 위해서는?
    int (*int_arr_p)[3] = score;    // int형 포인터 변수, int 배열 포인터

    /* 포인터배열의 크기 vs 배열포인터의 크기 
     * 포인터->배열의 크기는 포인터의 크기 * 배열의 원소의 개수
     * 배열->포인터의 크기는 어쨌든 메모리주소가 담겨있는 "변수" 따라서 포인터의크기 */
    printf("\n============ sizeof each object ============\n");
    printf("sizeof(int_p_arr):%d, sizeof(int_arr_p):%d\n", sizeof(int_p_arr), sizeof(int_arr_p));
    /* 포인터배열의 원소의 크기 vs 배열포인터의 원소의 크기
     * 포인터배열의 원소는 포인터 변수이므로 포인터의 크기
     * 배열포인터의 원소는 배열이므로 배열의 크기 (int[3] --> 12) */
    printf("\n============ sizeof each element ============\n");
    printf("sizeof(int_p_arr[0]):%d, sizeof(int_arr_p[0]):%d\n", sizeof(int_p_arr[0]), sizeof(int_arr_p[0]));

    // 각 원소의 접근은? --> 똑같다!
    printf("\n============ access each element ============\n");
    for (i = 0; i < 3; i++)
        printf("score[0][%d]:%x, int_p_arr[0][%d]:%x, int_arr_p[0][%d]:%x\n", i, score[0][i], i, int_p_arr[0][i], i, int_arr_p[0][i]);
    for (i = 0; i < 3; i++)
        printf("score[1][%d]:%x, int_p_arr[1][%d]:%x, int_arr_p[1][%d]:%x\n", i, score[1][i], i, int_p_arr[1][i], i, int_arr_p[1][i]);

    // 2중 for문으로 탐색?
    printf("\n============ access each element with 2D for loop ============\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("score[%d][%d]:%x, int_p_arr[%d][%d]:%x, int_arr_p[%d][%d]:%x\n", i, j, score[i][j], i, j, int_p_arr[i][j], i, j, int_arr_p[i][j]);
        }
    }

    
    return 0;
}