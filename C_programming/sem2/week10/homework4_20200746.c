#include <stdio.h>

// 학생정보 담는 자료형
typedef struct _student_t {
    char name[11];
    double kor;
    double eng;
    double math;
} student_t;

int main(void){
    // 크기 10의 배열 students 생성
    student_t students[10];

    int N;
    char fpath[31];
    FILE *fp;

    // 파일 경로 fpath 입력받기
    while (1)
    {
        scanf("%s", fpath);
        // 파일 존재하지 않을 경우 열 수 있을때까지 반복하여 입력받음
        if ((fp = fopen(fpath, "r")) == NULL) {
            printf("Cannot open file %s\n", fpath);
            continue;
        }
        else {break;}
    }

    // 학생정보 개수 N 입력받기 (유효한 범위가 입력될 때까지 다시 입력)
    do
    {
        scanf("%d", &N);
    } while (N <= 0 || N > 10);

    // 파일로부터 N개의 학생 정보를 읽어 배열에 저장한다. (이름, 국어, 영어, 수학)
    for (int i = 0; i < N; i++){
        fscanf(fp, "%s %lf %lf %lf", students[i].name, &students[i].kor, &students[i].eng, &students[i].math);
    }

    fclose(fp);

    // N개 데이터 입력 후, 총점 가장 높은 학생 이름 출력
    int max_idx = 0;
    double max_score_sum = 0.0;
    for(int i = 0; i < N; i++){
        double score_sum = students[i].kor + students[i].eng + students[i].math;
        if(score_sum >= max_score_sum){
            max_idx = i;
            max_score_sum = score_sum;
        }
    }
    printf("%s", students[max_idx].name);

    return 0;
}

