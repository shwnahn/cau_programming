/*
 * 파일열고 닫기 (파일이 존재하지 않을 때)
 */

#include <stdio.h>

int main() {
    FILE *fp;   // 파일의 열고,닫고,쓰기 위해서는 파일의 위치(주소)를 알아야한다.
    int fstate; // 파일의 상태를 저장할 변수
    
    /* 파일 열기 */
    fp = fopen("test.txt", "r");    // fopen() 함수를 이용하여 파일을 열고, 파일의 위치(주소)를 fp에 저장한다.
    if (fp == NULL) // 파일이 열리지 않았을 경우 NULL을 반환한다.
        printf("Fail to open file\n");
    else
        printf("Success to open file\n");
    
    /* 파일 닫기 */
    fstate = fclose(fp); // 파일을 닫는다.
    if (fstate == EOF)    // 파일이 정상적으로 닫혔을 경우 0을 반환한다.
        printf("Fail to close file\n");
    else 
        printf("Success to close file\n");
    return 0;
}