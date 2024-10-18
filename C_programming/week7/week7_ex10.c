/*
 * 버퍼 (fflush)
 */

#include <stdio.h>

int main (void) {
    char str[13];
    
    // 사용자에게 입력받은 후 출력
    fgets(str, sizeof(str), stdin);
    printf("(1st): %s\n", str);

    // 사용자에게 입력을 받기 전 버퍼를 비워 새로 입력받기
    fflush(stdin);
    fgets(str, sizeof(str), stdin);
    printf("(2nd): %s\n", str);

    return 0;
}