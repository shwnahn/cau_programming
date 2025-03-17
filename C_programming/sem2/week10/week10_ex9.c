/*
 * 파일 끝까지 읽기(fgets)
 */

#include <stdio.h>

int main() {
    char *fname = "inputs/popular_names.txt";
    FILE *fp;
    char buffer[256];   // 문자열을 저장할 변수
    
    if ((fp = fopen(fname, "r")) == NULL)
        printf("Fail to open file\n");
    else
        printf("Success to open file\n");

    while (fgets(buffer, 256, fp) != NULL) // 파일에서 256글자 또는 줄바꿈 문자를 만날 때까지 읽어 buffer에 저장
        printf("%s", buffer); // buffer에 저장된 내용을 출력
    
    if (fclose(fp) == EOF)
        printf("Fail to close file\n");
    else 
        printf("Success to close file\n");
    return 0;
}