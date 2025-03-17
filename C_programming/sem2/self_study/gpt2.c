#include <stdio.h>

int main(void) {
    int arr[10] = {0};
    // printf("%lu", sizeof(arr));
    int i;
    int input;
    printf("숫자를 입력하세요. 그만 입력하려면 0을 입력하세요. \n");
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d번째 숫자를 입력해주세요: ", i + 1);
        scanf("%d", &input);
        if(input == 0) {
            printf("0이 입력되었습니다. 입력 종료. \n");
            break;
        }
        arr[i] = input;
    }
    
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if(arr[i] == 0){
            break;
        }
        printf("배열의 %d 번째 값: %d\n", i + 1, arr[i]);
    }

    int min = arr[0];
    int max = arr[0];
    // 배열 순회하며 최소, 최대값 찾기
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if(arr[i] == 0){
            break;
        }
        
        if(arr[i] < min) {
            min = arr[i];
        }

        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("min: %d \n", min);
    printf("max: %d \n", max);

    return 0;
}