/*
 * 파일 읽기(바이너리)
 */

#include <stdio.h>

int main() {
    char *fname = "inputs/CAU_emblem.png"; // png는 사진파일의 확장자
    FILE *fp;
    char buffer[256]; // 파일에서 읽은 내용을 저장할 버퍼
    
    if ((fp = fopen(fname, "rb")) == NULL) // 텍스트 파일이 아닌 바이너리 파일(b)을 읽기(r) 모드로 열기
        printf("Fail to open file\n");
    else
        printf("Success to open file\n");

    fread(buffer, 1, 10, fp); // 파일에서 1바이트씩 10번 읽어서 fname에 저장
    printf("%s\n", buffer);   // 읽은 내용 출력
    
    /* 파일 닫기 */
    if (fclose(fp) == EOF)    // fclose의 반환 값을 바로 비교
        printf("Fail to close file\n");
    else 
        printf("Success to close file\n");
    return 0;
}