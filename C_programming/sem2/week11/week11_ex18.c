/*
 * 2차원 동적 메모리 할당 해제 (순서 주의)
*/

#include <stdio.h>
#include <stdlib.h>  // malloc, free 함수를 사용하기 위해 stdlib.h 헤더파일을 포함
#include <string.h>  // strcpy 함수를 사용하기 위해 string.h 헤더파일을 포함

int main(void) {
    char **arr2d;  // 2차원 동적메모리를 할당받을 포인터
    int i;

    arr2d = (char **)malloc(3 * sizeof(char *));    // 3개의 문자배열을 가리킬 수 있는 포인터를 동적메모리로 할당
    arr2d[0] = (char *)malloc(12 * sizeof(char));   // 첫 번째 원소에 12바이트 크기의 문자배열을 동적메모리로 할당 (11글자의 문자열)
    strcpy(arr2d[0], "Programming");                // 문자열 복사(값 대입)
    arr2d[1] = (char *)malloc(6 * sizeof(char));    // 두 번째 원소에 6바이트 크기의 문자배열을 동적메모리로 할당 (11글자의 문자열)
    strcpy(arr2d[1], "Hello");                      // 문자열 복사(값 대입)
    arr2d[2] = (char *)malloc(7 * sizeof(char));    // 세 번째 원소에 7바이트 크기의 문자배열을 동적메모리로 할당 (11글자의 문자열)
    strcpy(arr2d[2], "World!");                      // 문자열 복사(값 대입)

    /* 동적으로 메모리를 할당 받은 건 add2d만이 아니다! */
    // 각각의 원소도 동적할당을 받았으며, 가리키는 메모리가 다르다.
    printf("arr2d: %p\n", arr2d);
    printf("arr2d[0]: %p\n", arr2d[0]);
    printf("arr2d[1]: %p\n", arr2d[1]);
    printf("arr2d[2]: %p\n", arr2d[2]);
    
    // 따라서 free를 통해 메모리를 해제할 때에는 각각의 원소에 대해서도 해제를 해주어야 한다.
    /* 단! add2d의 원소들도 동적할당을 받았으므로
       각 원소를 먼저! 해제해주어야 한다. 
       (할당 순서의 역순으로 해제를 진행한다고 생각하면 편하다.) */
    free(arr2d[2]);
    free(arr2d[1]);
    free(arr2d[0]);
    free(arr2d);

    return 0;
}