/**
 * 표준 입력으로 5x5 정사각행렬이 입력됩니다. 
 * 다음 소스 코드를 완성하여 입력된 행렬의 전치행렬이 출력되게 만드세요.
 * 
 * 전치행렬은 왼쪽 위부터 오른쪽 아래까지의 대각선(주대각선)을 기준으로 
 * 값을 뒤집은 행렬을 말합니다.
 */

#include <stdio.h>

int main()
{
    int matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    // scanf("%d %d %d %d %d", 
    //     &matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3], &matrix[0][4]);
    // scanf("%d %d %d %d %d", 
    //     &matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3], &matrix[1][4]);
    // scanf("%d %d %d %d %d", 
    //     &matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3], &matrix[2][4]);
    // scanf("%d %d %d %d %d", 
    //     &matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3], &matrix[3][4]);
    // scanf("%d %d %d %d %d", 
    //     &matrix[4][0], &matrix[4][1], &matrix[4][2], &matrix[4][3], &matrix[4][4]);

    int size = sizeof(matrix[0]) / sizeof(int);

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    // for(int i = size - 1; i >= 0; i--)
    // {
    //     for(int j = size - 1; j >= 0; j--)
    //     {
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }


    return 0;
}