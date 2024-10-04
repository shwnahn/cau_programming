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
    // 함수의 내용도 어딘가에 저장된다. 그러니까 함수의 주소도 어딘가에 저장된다.
    // 배열의 이름은 배열의 시작주소, 함수의 이름은? --> 함수의 시작주소
    printf("address of myadd:%p\n", myadd);
    printf("address of mysub:%p\n", mysub);
    printf("address of mymul:%p\n", mymul);
    printf("address of mydiv:%p\n", mydiv);

    return 0;
}

// 함수의 내용을 정의할 때에는 인자를 저장할 매개"변수"가 있어야하니까 변수의 이름을 써야한다.
int myadd(int n1, int n2) { return n1 + n2; }
int mysub(int n1, int n2) { return n1 - n2; }
int mymul(int n1, int n2) { return n1 * n2; }
int mydiv(int n1, int n2) { return n1 / n2; }