#include <stdio.h>

// 학생정보 담는 자료형
typedef struct _student_t {
    char name[10];
    double kor;
    double eng;
    double math;
} student_t;


int main(void){
    // 크기 10의 배열 students 생성
    student_t students[10];

    // 학생정보 개수 N 입력
    int N;
    int max_idx = 0;
    double score_sum;
    double max_score = 0.0;

    do
    {
        scanf("%d", &N);
    } while (N <= 0 || N > 10);

    // N명 학생 점수 입력 (국어, 영어, 수학)
    for (int i = 0; i < N; i++){
        scanf("%s %lf %lf %lf", students[i].name, &students[i].kor, &students[i].eng, &students[i].math);
        score_sum = students[i].kor + students[i].eng + students[i].math;
        if ( score_sum > max_score) {
            max_idx = i;
            max_score = score_sum;
        }
    };

    // 총점 가장 높은 학생 이름 출력
    printf("%s\n", students[max_idx].name);

    return 0;
}

