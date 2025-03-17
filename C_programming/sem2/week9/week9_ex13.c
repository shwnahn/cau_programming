/*
 * 공용체
 */

#include <stdio.h>

union student {
    char name[9]; // char 변수가 9개 있어 9바이트 필요.
    short year;   // short 변수가 1개 있어 2바이트 필요.
    int studentid;// int 변수가 1개 있어 4바이트 필요.
}; // 따라서 공용체의 크기는 9바이트??

int main(void) {
    union student puang = {.name = "Puang"};

    // 각 멤버들의 주소
    printf("puang.age: %p\n", &puang.name);
    printf("puang.year: %p\n", &puang.year);
    printf("puang.studentid: %p\n", &puang.studentid);

    // 공용체의 크기
    printf("size of puang: %d\n", sizeof(puang));
    printf("size of union student: %d\n", sizeof(union student));

    // 가장 큰 기본 자료형은 int이므로, 4의 배수 중 9바이트보다 큰 12바이트!

    return 0;
}