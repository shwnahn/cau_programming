/*
 * 전처리 (#define, 매크로상수 #1)
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
    // 변수(구조체 멤버)에 값을 담을때로 활용할 수 있고
    student_t puang = {NAME, AGE, GRADE};
    printf("Name: %s\n", puang.name);
    printf("Age: %d\n", puang.age);
    printf("Grade: %.1f\n", puang.grade);

    // 그냥 바로 사용할 수도 있다.
    printf("Name: %s\n", NAME);
    printf("Age: %d\n", AGE);
    printf("Grade: %.1f\n", GRADE);

    // 당연히 상수니까!

    return 0;
}