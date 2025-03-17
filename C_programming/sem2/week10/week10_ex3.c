/*
 * 파일 읽기
 */

#include <stdio.h>

int main() {
    char *fname = "inputs/test.txt";
    FILE *fp;
    char buffer[256];   // 파일에서 읽어온 내용을 저장할 버퍼
    int num;            // 파일에서 읽어온 정수를 저장할 변수
    
    /* 파일 열기 */
    // 괄호로 구분하여 한 라인에 여러 의미의 문장을 수행할 수 있다.
    // 아래 문장의 경우 fopen() 함수를 이용하여 파일을 열고, 파일의 위치(주소)를 fp에 저장한 후
    // fp에 저장된 값이 NULL인지 비교한다.
    //    fp = fopen(fname, "r")
    //    if (fp == NULL)
    // 과 동일한 동작
    if ((fp = fopen(fname, "r")) == NULL)
        printf("Fail to open file\n");
    else
        printf("Success to open file\n");

    fgets(buffer, 256, fp); // 파일에서 256글자 또는 줄바꿈 문자를 만날 때까지 읽어 buffer에 저장
    printf("Read: %s", buffer); // buffer에 저장된 내용을 출력
    fgets(buffer, 256, fp); // 다음 256글자 또는 줄바꿈 문자를 만날 때까지 읽어 buffer에 저장
    printf("Read: %s", buffer); // buffer에 저장된 내용을 출력
    fscanf(fp, "%d %s", &num, buffer); // 파일에서 정수를 읽고, 정수를 num에 저장하고, 문자열을 buffer에 저장
    printf("Read:\n");  // num과 buffer에 저장된 내용을 출력
    printf("    -- num:%d\n", num);
    printf("    -- buffer:%s\n", buffer);
    
    /* 파일 닫기 */
    if (fclose(fp) == EOF)    // fclose의 반환 값을 바로 비교
        printf("Fail to close file\n");
    else 
        printf("Success to close file\n");
    return 0;
}