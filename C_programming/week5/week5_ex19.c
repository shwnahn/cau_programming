/*
 * 여러종류의 포인터배열
 */

#include <stdio.h>

int main(void) {
    /* int형 포인터와 int형 포인터배열 */
    int *int_p = NULL;
    int *int_p_arr[3] = {NULL, NULL, NULL}; // int형 포인터 3개를 담을 수 있는 배열
    printf("===== int pointer & int pointer array =====\n");
    printf("sizeof(int_p):%lu\n", sizeof(int_p));
    printf("sizeof(int_p_arr):%lu\n", sizeof(int_p_arr));

    /* TODO:int배열 포인터와 int배열 포인터배열 */
    int *int_arr_p = NULL;     // TODO:수정
    int *int_arr_p_arr = NULL; // TODO:수정
    printf("===== int array pointer & int array pointer array =====\n");
    printf("sizeof(int_arr_p):%lu\n", sizeof(int_arr_p));
    printf("sizeof(int_arr_p_arr):%lu\n", sizeof(int_arr_p_arr));

    /* TODO:함수포인터와 함수포인터배열 */
    int *func_p = NULL;        // TODO:수정
    int *func_p_arr = NULL;    // TODO:수정
    printf("===== function pointer & function pointer array =====\n");
    printf("sizeof(func_p):%lu\n", sizeof(func_p));
    printf("sizeof(func_p_arr):%lu\n", sizeof(func_p_arr));

    return 0;
}

/* answer: int배열 포인터와 int배열 포인터배열 (크기는 아무렇게나) */
/*
    int (*int_arr_p)[3];    // 포인터라는 것을 강조하기 위해 괄호로 묶어줌
    int (*int_arr_p_arr[3])[3]; // int배열 포인터 3개를 담을 수 있는 배열
    printf("===== int array pointer & int array pointer array =====\n");
    printf("sizeof(int_arr_p):%lu\n", sizeof(int_arr_p));
    printf("sizeof(int_arr_p_arr):%lu\n", sizeof(int_arr_p_arr));
*/

/* answer: 함수포인터와 함수포인터배열 (return type, parameter type은 아무렇게나) */
/*
    double (*func_p)(int, int); // 포인터라는 것을 강조하기 위해 괄호로 묶어줌
    double (*func_p_arr[3])(int, int); // 함수포인터 3개를 담을 수 있는 배열
    printf("===== function pointer & function pointer array =====\n");
    printf("sizeof(func_p):%lu\n", sizeof(func_p));
    printf("sizeof(func_p_arr):%lu\n", sizeof(func_p_arr));
*/
