/*
 * 함수포인터
 */

#include <stdio.h>

// 선언만 할거니까 변수의 이름은 생략 가능


int myadd(int, int);
int mysub(int, int);
int mymul(int, int);
int mydiv(int, int);

int main(void) {
    // 함수포인터 선언
    int (*myop)(int, int) = NULL;  // 타입이 같아야 한다.
    
    // 함수포인터에 함수의 주소를 저장
    printf("======= myop = myadd =======\n");
    myop = myadd;   // myop에 myadd의 주소를 저장
    printf("myop(20, 10):%d\n", myop(20, 10)); // myadd(20, 10)과 같은 표현
    printf("myadd(20, 10):%d\n", myadd(20, 10));

    printf("======= myop = mysub =======\n");
    myop = mysub;   // myop에 mysub의 주소를 저장
    printf("myop(20, 10):%d\n", myop(20, 10)); // mysub(20, 10)과 같은 표현
    printf("mysub(20, 10):%d\n", mysub(20, 10));

    printf("======= myop = mymul =======\n");
    myop = mymul;   // myop에 mymul의 주소를 저장
    printf("myop(20, 10):%d\n", myop(20, 10)); // mymul(20, 10)과 같은 표현
    printf("mymul(20, 10):%d\n", mymul(20, 10));

    printf("======= myop = mydiv =======\n");
    myop = mydiv;   // myop에 mydiv의 주소를 저장
    printf("myop(20, 10):%d\n", myop(20, 10)); // mydiv(20, 10)과 같은 표현
    printf("mydiv(20, 10):%d\n", mydiv(20, 10));

    return 0;
}

// 함수의 내용을 정의할 때에는 인자를 저장할 매개"변수"가 있어야하니까 변수의 이름을 써야한다.
int myadd(int n1, int n2) { return n1 + n2; }
int mysub(int n1, int n2) { return n1 - n2; }
int mymul(int n1, int n2) { return n1 * n2; }
int mydiv(int n1, int n2) { return n1 / n2; }