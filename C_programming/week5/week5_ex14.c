/*
 * 배열포인터
 */


#include <stdio.h>

int main(void) {
    int i;
    // 2차원 배열 선언
    int score[2][3] = {{0x30, 0x44, 0x67}, {0x87, 0x43}};

    // 배열의 이름은 시작 원소의 주소, 따라서 포인터 변수에 할당 가능
    int (*int_arr_p)[3] = score;

    // *int_arr_p은? score의 값 == score[0]의 값 == score[0][0~1]의 시작주소
    printf("*int_arr_p:%p, score:%p, score[0]:%p\n", *int_arr_p, score, score[0]);
    for (i = 0; i < 3; i++)
        printf("*int_arr_p[%d]:%x, score[0][%d]:%x\n", i, (*int_arr_p)[i], i, score[0][i]);
    // 포인터는 배열처럼 접근이 가능
    for (i = 0; i < 3; i++)
        printf("int_arr_p[0][%d]:%x, score[0][%d]:%x\n", i, int_arr_p[0][i], i, score[0][i]);

    // *(int_arr_p + 1)은? score[1]의 값 == score[1][0~1]의 시작주소
    printf("*(int_arr_p + 1):%p, score[1]:%p\n", *(int_arr_p + 1), score[1]);
    for (i = 0; i < 3; i++)
        printf("*int_arr_p[%d]:%x, score[1][%d]:%x\n", i, (*(int_arr_p + 1))[i], i, score[1][i]);
    // 포인터는 배열처럼 접근이 가능
    for (i = 0; i < 3; i++)
        printf("int_arr_p[1][%d]:%x, score[1][%d]:%x\n", i, int_arr_p[1][i], i, score[1][i]);

    
    return 0;
}