#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 컴파일 시 TARGET 입력받음. 기본값은 0
#ifndef TARGET
#define TARGET 0
#endif

// student_t 자료형 정의
typedef struct _student_t {
    char name[11];
    double kor;
    double eng;
    double math;
} student_t;


int main(void) {
    int capacity = 1;
    int cnt = 0;
    int i;

    // hw5_inputs.txt 파일 읽기
    char fname[] = "hw5_input.txt";
    FILE *fp = fopen(fname, "r");

    // 동적 배열 students 생성
    student_t *students = (student_t *)malloc(sizeof(student_t) * capacity);
    student_t tmp_std;

    // students에 읽은 자료 저장
    while(fscanf(fp, "%s %lf %lf %lf", tmp_std.name, &tmp_std.kor, &tmp_std.eng, &tmp_std.math) != EOF) {
        if (cnt >= capacity) {
            capacity++;
            students = (student_t *)realloc(students, sizeof(student_t) * capacity);
        }
        memcpy(&students[cnt++], &tmp_std, sizeof(student_t));
    }
    fclose(fp);

    int min_idx = 0, max_idx = 0;
    double min_score_sum = students[0].kor + students[0].eng + students[0].kor;
    double max_score_sum = students[0].kor + students[0].eng + students[0].kor;
    
    for (i = 0; i < cnt; i++) {
        double score_sum = students[i].kor + students[i].eng + students[i].math;
        if (score_sum > max_score_sum) {
            max_score_sum = score_sum;
            max_idx = i;
        }
        if (score_sum < min_score_sum) {
            min_score_sum = score_sum;
            min_idx = i;
        }
    }


    // TARGET 값에 따라 조건에 맞는 학생 이름 출력
    #if (TARGET == 0)
        // 점수 높은 학생 출력
        printf("%s", students[max_idx].name);
    #elif (TARGET == 1)
        // 점수 낮은 학생 출력
        printf("%s", students[min_idx].name);
    #else
        // 강제 에러 발생
        #error 에러 발생!
    #endif

    free(students);
    return 0;
}