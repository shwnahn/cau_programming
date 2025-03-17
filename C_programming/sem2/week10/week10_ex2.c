/*
 * 파일열고 닫기 (파일이 존재할 때)
 */

#include <stdio.h>

int main() {
    char *fname = "inputs/test.txt"; // 파일 이름을 문자열로 저장
    FILE *fp;
    
    /* 파일 열기 */
    fp = fopen(fname, "r");
    if (fp == NULL) // 파일이 열리지 않았을 경우 NULL을 반환한다.
        printf("Fail to open file\n");
    else
        printf("Success to open file\n");
    
    /* 파일 닫기 */
    if (fclose(fp) == EOF)    // fclose의 반환 값을 바로 비교
        printf("Fail to close file\n");
    else 
        printf("Success to close file\n");
    return 0;
}