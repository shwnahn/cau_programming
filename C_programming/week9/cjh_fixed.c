#include <stdio.h>
#include <string.h>

typedef struct _student_t {
    char name[11];  // null 문자 포함, 크기 11
    double kor;
    double eng;
    double math;
    int cnt;
} student_t;

int student_number = 0;
student_t students[10];

// 평균 함수
double average(student_t student) {
    return (student.kor + student.eng + student.math) / (3 * student.cnt);
}

// 학생 정보 저장 함수
int store_student(char *name, double kor, double eng, double math) {
    for (int i = 0; i < student_number; i++) {
        // 학생이 존재하면 점수 누적
        if (strcmp(students[i].name, name) == 0) {
            students[i].kor += kor;
            students[i].eng += eng;
            students[i].math += math;
            students[i].cnt += 1;
            return 0;
        }
    }

    // 새로운 학생 추가
    if (student_number < 10) {
        strcpy(students[student_number].name, name);
        students[student_number].kor = kor;
        students[student_number].eng = eng;
        students[student_number].math = math;
        students[student_number].cnt = 1;
        student_number += 1;
        return 0;
    } else {
        // 배열에 공간이 없을 때
        return -1;
    }
}

int main() {
    student_t student;

    // 값 입력 받기
    while (1) {
        scanf("%10s", student.name);
        // "exit"이면 반복 종료
        if (strcmp(student.name, "exit") == 0)
            break;

        scanf("%lf %lf %lf", &student.kor, &student.eng, &student.math);

        int ret = store_student(student.name, student.kor, student.eng, student.math);
        if (ret == -1) {
            // 배열에 공간이 없을 때 프로그램 종료
            return -1;
        }
    }

    if (student_number > 0) {
        // 최고 점수, 최고 학생 구하기
        double best_average = 0;
        char best_student[11] = "";

        for (int i = 0; i < student_number; i++) {
            double average_new = average(students[i]);
            if (average_new > best_average) {
                best_average = average_new;
                strcpy(best_student, students[i].name);
            }
        }
        // 출력
        printf("%s(%.2f)", best_student, best_average);
        return 0;
    } else {
        return -1;
    }
}