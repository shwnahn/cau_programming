#include <stdio.h>
#include <string.h>

// 학생정보 담는 자료형
typedef struct _student_t {
    char name[11]; // null 문자 포함, 크기 11
    double kor;
    double eng;
    double math;
    int cnt;
} student_t;

int main(void){
    student_t students[10]; // 크기 10의 배열 students 생성
    int existing_idx; // 이름 중복되는 인덱스
    int student_idx = 0;  // 배열 속 학생 인덱스 카운터

    while (1) {
        // 학생 이름 입력
        char input_name[11]; // null 문자 포함, 크기 11
        scanf("%10s", input_name); // 최대 10글자만 입력받도록 제한

        // exit 입력하면 반복 멈추고, 평균이 가장 높은 학생의 이름과 평균을 출력
        if (strcmp(input_name, "exit") == 0){
            // 평균 높은 학생 찾기
            int max_idx = -1; // 평균 가장 높은 학생 인덱스
            double max_avg = 0.0; // 가장 높은 평균값

            for (int i = 0; i < student_idx; i++) {
                double avg = (students[i].kor + students[i].eng + students[i].math) / (3 * students[i].cnt);
                if (avg > max_avg) {
                    max_avg = avg;
                    max_idx = i;
                }
            }
            if (max_idx != -1){
                printf("%s(%.2lf)", students[max_idx].name, max_avg);
            }
            return 0;
        }

        // 배열에 이름 있는 지 확인
        existing_idx = -1;
        for (int i = 0; i < student_idx; i++) {
            if(strcmp(input_name, students[i].name) == 0){
                existing_idx = i;
                break;
            }
        }


        // [추가] 구조체 포인터 활용
        // 배열에 이름 없을 경우
        if (existing_idx == -1) {
            // 배열에 공간 없다면 프로그램 종료
            if (student_idx >= 10) {
                return -1;
            }
            // 새로운 인덱스에 자료 추가
            student_t *new_student = &students[student_idx];
            strcpy(new_student->name, input_name);
            scanf("%lf %lf %lf", new_student->kor, new_student->eng, new_student->math);
            new_student.cnt = 1;
            student_idx += 1;
        } else { // 배열에 이미 이름 있으면 해당 자료에 점수, 응시횟수 누적
            student_t *existing_student = &students[existing_idx];
            double new_kor, new_eng, new_math;
            scanf("%lf %lf %lf", &new_kor, &new_eng, &new_math);
            existing_student->kor += new_kor;
            existing_student->eng += new_eng;
            existing_student->math += new_math;
            existing_student->cnt += 1;
        }
    }
}