/*
 * 라이브러리 예제
 */

#include <stdio.h>
#include <math.h>

int main(void) {

    // printf 함수는 stdio.h 헤더파일을 포함하면 사용할 수 있다.
    printf("printf is available if the source code include stdio.h\n");

    // sqrt, pow 함수는 math.h 헤더파일을 포함하면 사용할 수 있다.
    printf("following functions are available if the source code include math.h\n");
    printf("sqrt(4.0): %lf\n", sqrt(4.0));
    printf("pow(2.0, 3.0): %lf\n", pow(2.0, 3.0));

    return 0;
}