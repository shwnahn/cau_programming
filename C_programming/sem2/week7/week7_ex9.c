/*
 * 문자열 입력 (fgets)
 */

#include <stdio.h>

int main (void) {
    char str[13];
    
    // 사용자에게 입력받은 후 출력
    fgets(str, sizeof(str), stdin);
    printf("(1st): %s\n", str);

    // 사용자에게 입력받은 후 출력
    fgets(str, sizeof(str), stdin);
    printf("(2nd): %s\n", str);

    return 0;
}