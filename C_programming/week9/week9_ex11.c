/*
 * 이름없는 구조체
 */

#include <stdio.h>

int main(void) {
    // struct 뒤 타입을 명시하지 않고,
    struct {
        char *name;
        int studentid;
        double grade;
    } student = {"Chung-Ang", 1916, 4.0};   // 바로 변수를 선언, 초기화

    printf("student.name: %s\n", student.name);
    printf("student.studentid: %d\n", student.studentid);
    printf("student.grade: %f\n", student.grade);

    return 0;
}