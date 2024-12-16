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

// 학생 이름 출력 함수

int main(void){
    // 파일에 저장된 학생 정보 입력받기
    FILE *fp;
    char fname[31];
    student_t *students;
    student_t tmp_std;
    int capacity = 1;
    int cnt = 0;
    
    while (1){
        // inputs/names.txt
        scanf("%s", fname);
        if ((fp = fopen(fname, "r")) != NULL) break;
        printf("Cannot open file: %s", fname);
    }

    // 동적 배열 students에 저장
    students = (student_t *)malloc(sizeof(student_t));
    while(fscanf(fp, "%s %lf %lf %lf", &tmp_std.name[0], &tmp_std.kor, &tmp_std.eng, &tmp_std.math) != EOF) {
        if (cnt >= capacity) {
            capacity++;
            students = (student_t *)realloc(students, sizeof(student_t) * capacity);
        }
        memcpy(&students[cnt++], &tmp_std, sizeof(student_t));
    }

    fclose(fp);

    // 가장 높은 학생 이름 출력
    int max_idx = 0;
    int max_score = students[0].kor + students[0].eng + students[0].math;
    for (int i = 0; i < cnt; i++){
        double score_sum = students[i].kor + students[i].eng + students[i].math;
        if (score_sum >= max_score) {
            max_score = score_sum;
            max_idx = i;
        }
    }
    printf("%s",students[max_idx].name);

    free(students);

}