/*
 * 디버깅 예제 (week10_ex0.c와 기본구조는 동일)
 */

/*
 * 컴파일 단계에서 특정 매크로를 정의하려면 -D 옵션을 사용한다.
   * gcc -o [run.exe] [source.c] -D[MACRO_NAME]
     ex) gcc -o week12_ex17.exe week12_ex17.c -DDEBUGON
 */

#include <stdio.h>

void myadd(int *p3, int n3);
void myadd_and_pow(int *p2, int n2);

int main(void) {
    int *p;
    // p = 10;    // 포인터 변수 p에 메모리주소 10을 가리키도록 한다.
    printf("first statement\n");
    myadd_and_pow(p, 5);
    printf("second statement\n");

    return 0;
}

void myadd_and_pow(int *p2, int n2) {
/* 디버깅모드에서만 출력할 내용을 작성 */
#ifdef DEBUGON
    printf("(myadd_and_pow) p2: %p, n2: %d\n", p2, n2);
#endif
    myadd(p2, n2);
    *p2 = *p2 * *p2;
}

void myadd(int *p3, int n3) {
/* 디버깅모드에서만 출력할 내용을 작성 */
#ifdef DEBUGON
    printf("(myadd) p3: %p, n3: %d\n", p3, n3);
#endif
    *p3 = *p3 + n3;
}