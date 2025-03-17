#include <stdio.h>
#include <string.h>

// 학생 정보를 담는 자료형 정의
typedef struct _student_t {
    char name[11];     // 최대 10글자의 이름 (널 종료 문자 포함)
    double kor;        // 국어 점수의 합계
    double eng;        // 영어 점수의 합계
    double math;       // 수학 점수의 합계
    int cnt;           // 응시 횟수
} student_t;

int main(void) {
    student_t students[10];   // 최대 10명의 학생 정보를 담을 수 있는 배열
    int student_count = 0;    // 현재 저장된 학생 수
    char input_name[11];      // 입력받은 이름 (널 종료 문자 포함)

    while (1) {
        double new_kor, new_eng, new_math;

        // 이름과 점수를 한 번에 입력받음
        if (scanf("%s", input_name) != 1) {
            return -1; // 입력 오류 시 프로그램 종료
        }

        // "exit" 입력 시 반복 종료
        if (strcmp(input_name, "exit") == 0) {
            break;
        }

        // 국어, 영어, 수학 점수 입력받음
        if (scanf("%lf %lf %lf", &new_kor, &new_eng, &new_math) != 3) {
            return -1; // 입력 오류 시 프로그램 종료
        }

        // 기존에 동일한 이름의 학생이 있는지 확인
        int existing_idx = -1;
        for (int i = 0; i < student_count; i++) {
            if (strcmp(input_name, students[i].name) == 0) {
                existing_idx = i;
                break;
            }
        }

        if (existing_idx == -1) {
            // 새로운 학생 추가
            if (student_count >= 10) {
                return -1; // 배열에 더 이상 공간이 없을 경우 프로그램 종료
            }
            strcpy(students[student_count].name, input_name);
            students[student_count].kor = new_kor;
            students[student_count].eng = new_eng;
            students[student_count].math = new_math;
            students[student_count].cnt = 1;
            student_count++;
        } else {
            // 기존 학생의 점수와 응시 횟수 누적
            students[existing_idx].kor += new_kor;
            students[existing_idx].eng += new_eng;
            students[existing_idx].math += new_math;
            students[existing_idx].cnt += 1;
        }
    }

    // 평균이 가장 높은 학생 찾기
    int max_idx = -1;
    double max_avg = -1.0; // 평균 점수의 초기값 설정

    for (int i = 0; i < student_count; i++) {
        double avg = (students[i].kor + students[i].eng + students[i].math) / (3.0 * students[i].cnt);
        if (avg > max_avg) {
            max_avg = avg;
            max_idx = i;
        }
    }

    // 결과 출력
    if (max_idx != -1) {
        printf("%s(%.2lf)", students[max_idx].name, max_avg);
    }

    return 0;
}