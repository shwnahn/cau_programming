#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 학생정보 담는 자료형
typedef struct _student_t {
    char name[11];
    double kor;
    double eng;
    double math;
} student_t;

int main(void){
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

    // 동적 배열 students 생성
    int capacity = 1;
    student_t *students = (student_t *) malloc(capacity * sizeof(student_t));
    student_t tmp_std; // *임시로 학생정보 할당할 구조체 변수

    int idx = 0;
    // 파일로부터 학생 정보를 읽어 배열에 저장한다. (이름, 국어, 영어, 수학)
    // TODO: 파일 전체 텍스트 가져오기
    while (fscanf(fp, "%s %lf %lf %lf", tmp_std.name, &tmp_std.kor, &tmp_std.eng, &tmp_std.math) != EOF)
    {
        if (idx >= capacity){
            capacity++;
            students = (student_t *) realloc(students, sizeof(student_t) * capacity);
        }
        memcpy(&students[idx], &tmp_std, sizeof(student_t));
        idx += 1;
    }

    fclose(fp);

    // N개 데이터 입력 후, 총점 가장 높은 학생 이름 출력
    int max_idx = 0;
    double max_score_sum = 0.0;
    for(int i = 0; i < idx; i++){
        double score_sum = students[i].kor + students[i].eng + students[i].math;
        if(score_sum >= max_score_sum){
            max_idx = i;
            max_score_sum = score_sum;
        }
    }
    printf("%s", students[max_idx].name);

    free(students);
    return 0;
}

