/*
 * 공용체
 */

#include <stdio.h>

union student {
    char age;     // char 변수가 1개 있어 1바이트 필요.
    short year;   // short 변수가 1개 있어 2바이트 필요.
    int studentid;// int 변수가 1개 있어 4바이트 필요.
}; // 따라서 공용체의 크기는?

int main(void) {
    union student puang = {.age = 20};

    // 각 멤버들의 주소
    printf("puang.age: %p\n", &puang.age);
    printf("puang.year: %p\n", &puang.year);
    printf("puang.studentid: %p\n", &puang.studentid);

    // 공용체의 크기
    printf("size of puang: %d\n", sizeof(puang));
    printf("size of union student: %d\n", sizeof(union student));

    // 각 멤버들의 값
    printf("puang.age: %d(in hex %08X)\n", puang.age, puang.age);
    printf("puang.year: %d(in hex %08X)\n", puang.year, puang.year);
    printf("puang.studentid: %d(in hex %08X)\n", puang.studentid, puang.studentid);

    // 값을 변경
    puang.studentid = 20210000;

    // 다시 출력하면 각 멤버의 값은?
    printf("puang.age: %d(in hex %08X)\n", puang.age, puang.age);
    printf("puang.year: %d(in hex %08X)\n", puang.year, puang.year);
    printf("puang.studentid: %d(in hex %08X)\n", puang.studentid, puang.studentid);

    return 0;
}