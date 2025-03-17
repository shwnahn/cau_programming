#include <stdio.h>

int main(void) {
    int N;
    int i, j;
    int max_i; // 가장 많이 보이는 사람의 위치
    double students[20];
    int visible_max = 0;

    // 학생 수 정수 N 입력
    printf("Enter the number of students: ");
    scanf("%d", &N);
    if (N > 20 || N <= 0){
        printf("Invalid N\n");
        return 1;
    }

    // N 개수만큼 학생 키 입력받음 (double)
    printf("Enter the height of students: ");
    for(i = 0; i < N; i++){    
        scanf("%lf", &students[i]);
    }

    // 얼마나 보이는지 확인, 비교
    for(i = N - 1; i > 0;){ // 1번째 학생은 안봐도 무고나함
        for (j = i - 1; j > 0; j--){
            if (students[i] <= students[j]){
                break;
            }
        }
        if (visible_max < i - j){
            max_i = i;
            visible_max = i - j;
        }
        // printf("[%d]:%d\n", i, i - j);
        i = j;
    }

    // 결과 print
    printf("answer: %d\n", max_i + 1);
    return 0;
}