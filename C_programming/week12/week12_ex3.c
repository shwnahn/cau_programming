/*
 * 전처리 (#define, undef)
 */

#include <stdio.h>

#define NAME "Puang" // 상수를 정의 (대문자로 정의하는 것이 관례)
#define AGE 20       // 정수던
#define GRADE 90.5   // 실수던 상관없이 타입을 지정하지 않고 매크로상수를 정의한다.

typedef struct _student_t {
    char name[20];
    int age;
    float grade;
} student_t;

int main(void) {
    student_t puang = {NAME, AGE, GRADE};
    printf("Name: %s\n", puang.name);
    printf("Age: %d\n", puang.age);
    printf("Grade: %.1f\n", puang.grade);

// NAME 매크로상수를 해제한다. 해당 라인 이후부터 NAME은 정의되지 않았다고 나온다.
#undef NAME // 전처리기 명령은 보통 들여쓰기를 하지 않는 것이 관례이다.

    printf("Name: %s\n", NAME); // undef로 NAME을 해제하였기 때문에 컴파일 에러가 발생한다.
    printf("Age: %d\n", AGE);
    printf("Grade: %.1f\n", GRADE);

    return 0;
}