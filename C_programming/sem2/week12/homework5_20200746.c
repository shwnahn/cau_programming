#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef TARGET
#else 
#define TARGET 0
#endif

// 학생정보 담는 자료형
typedef struct _student_t {
    char name[11];
    double kor;
    double eng;
    double math;
} student_t;

int main(void){
    char fpath[] = "hw5_input.txt";
    FILE *fp;
    fp = fopen(fpath, "r");

    // 동적 배열 students 생성
    int capacity = 1;
    student_t *students = (student_t *) malloc(capacity * sizeof(student_t));
    student_t tmp_std; // *임시로 학생정보 할당할 구조체 변수

    int idx = 0;
    // 파일로부터 학생 정보를 읽어 배열에 저장한다. (이름, 국어, 영어, 수학)
    // 파일 전체 텍스트 가져오기
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

    // 3.1 TARGET이 0일 경우 점수가 가장 높은 학생을 출력한다
    #if (TARGET == 0)
        // N개 데이터 입력 후, 총점 가장 높은 학생 이름 출력
        int max_idx = 0;
        double max_score_sum = students[0].kor + students[0].eng + students[0].math;
        for(int i = 1; i < idx; i++){
            double score_sum = students[i].kor + students[i].eng + students[i].math;
            if(score_sum >= max_score_sum){
                max_idx = i;
                max_score_sum = score_sum;
            }
        }
        printf("%s", students[max_idx].name);

    // 3.2 TARGET이 1일 경우 점수가 가장 낮은 학생을 출력한다.
    #elif (TARGET == 1)
        int min_idx = 0;
        double min_score_sum = students[0].kor + students[0].eng + students[0].math;
        for(int i = 1; i < idx; i++){
            double score_sum = students[i].kor + students[i].eng + students[i].math;
            if(score_sum <= min_score_sum){
                min_idx = i;
                min_score_sum = score_sum;
            }
        }
        printf("%s", students[min_idx].name);


    // 3.3 TARGET이 다른 값일 경우 강제로 에러를 발생시킨다.
    #else
        #error "wrong TARGET value"
    #endif

    free(students);
    return 0;
}

