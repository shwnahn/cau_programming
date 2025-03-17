#include <stdio.h>

int main() {
    int gugudan[10][10] = {0};
    int i, j;
    
    for(i=1; i<10; i++) {
        for(j=1; j<10; j++) {
           gugudan[i][j] = i * j;
           printf("%d*%d: %2d | ", i, j, gugudan[i][j]);
        }
        printf("\n");
    }

    int arr[2][3] = {
        {10, 20}, 
        {40, 50, 60},
        {10, 20},
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // int arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]); // 2차원 배열의 열의 길이를 계산함
    // printf("%d", arr_col_len);

    // return 0;
}


