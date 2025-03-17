#include <stdio.h>

// int main(void) {
//     // 주어진 값 배열
//     int arr[] = {2, 5, 7, 10, 13, 16};
//     // printf("%d", arr); - 어떻게 print하지?

//     char even_num;
//     char odd_num;
//     int i;
//     for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//         if(arr[i] % 2 == 0) {
//             even_num += arr[i];
//         }
//     }

//     printf("짝수: %d", even_num);
//     printf("홀수: %d", odd_num);
    
// }

int main(void) {
    // 주어진 값 배열
    int arr[] = {2, 5, 7, 10, 13, 16};
    int i;

    // 짝수 출력
    printf("짝수: ");
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    // 홀수 출력
    printf("홀수: ");
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {       
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}