#include <stdio.h>

typedef struct _student_t {
    char name[20];
    int year;
    char major[20];
    char address[50];
    double grade_programming;
    double grade_oss;
} sutdent_t;

typedef struct _student_t stud;

int main(void){
    struct _student_t puang = {"푸앙", 2021, "경영학과", "대구", 4.5, 4.0};
    puang.grade_oss = 1.1;

    stud sihwan = {
        .year = 2021,
        .name = "시환",
        .major = "교육학",
        .address = "독산",
        .grade_programming = 4.4,
        .grade_oss = 3.1
    };

    // printf("grade of [%s]: %.1f, %.1f\n", puang.name, puang.grade_oss, puang.grade_programming);
    // printf("major of [%s]: %s\n", sihwan.name, sihwan.major);

    stud *p = &puang;
    stud *s;

    s = &sihwan;

    printf("grade of [%s]: %.1f, %.1f\n", (*p).name, (*p).grade_oss, (*p).grade_programming);
    printf("grade of [%s]: %.1f, %.1f\n", (*s).name, (*s).grade_oss, (*s).grade_programming);

}