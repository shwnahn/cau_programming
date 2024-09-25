#include <stdio.h>

/* 잘못된 배열 초기화 */
int main(void) {
    // C언어 버전(컴파일러)에 따라, 배열의 크기에 변수를 사용할 수 없을 수 있음
    int size=5;
    int arr4[size];
    printf("sizeof(arr4): %lu\n", sizeof(arr4)/sizeof(int));
    printf("%d\n", arr4[0]);
    printf("%d\n", arr4[1]);
    printf("%d\n", arr4[2]);
    printf("%d\n", arr4[3]);
    printf("%d\n", arr4[4]);

    // 배열의 크기보다 많은 초기화 값이 들어오면, 컴파일러에 따라 경고 또는 에러 발생
    int arr5[3] = {98, 88, 92, 95, 70};
    printf("sizeof(arr5): %lu\n", sizeof(arr5)/sizeof(int));
    printf("%d\n", arr5[0]);
    printf("%d\n", arr5[1]);
    printf("%d\n", arr5[2]);
    printf("%d\n", arr5[3]);
    printf("%d\n", arr5[4]);

    // 배열 생성 후에는 한 번에 초기화 불가능
    int arr6[5];
    // arr6 = {98, 88, 92, 95, 70};
    printf("sizeof(arr6): %lu\n", sizeof(arr6)/sizeof(int));
    printf("%d\n", arr6[0]);
    printf("%d\n", arr6[1]);
    printf("%d\n", arr6[2]);
    printf("%d\n", arr6[3]);
    printf("%d\n", arr6[4]);

    return 0;
}