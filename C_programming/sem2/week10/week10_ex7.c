/*
 * 파일 읽고 쓰기(바이너리)
 */

#include <stdio.h>

int main() {
    char *rfname = "inputs/CAU_emblem.png"; // png는 사진파일의 확장자
    char *wfname = "outputs/CAU_emblem_copy.png";
    FILE *rfp, *wfp;  // 읽기용 파일 포인터(rfp)와 쓰기용 파일 포인터(wfp)
    char buffer[256]; // 파일에서 읽은 내용을 저장할 버퍼
    
    if ((rfp = fopen(rfname, "rb")) == NULL) // 텍스트 파일이 아닌 바이너리 파일(b)을 읽기(r) 모드로 열기
        printf("Fail to open read-file\n");
    else
        printf("Success to open read-file\n");

    if ((wfp = fopen(wfname, "wb")) == NULL) // 텍스트 파일이 아닌 바이너리 파일(b)을 쓰기(w) 모드로 열기
        printf("Fail to open write-file\n");
    else
        printf("Success to open write-file\n");

    fread(buffer, 1, 256, rfp); // 읽기용 파일에서 1바이트씩 10번 읽어서 fname에 저장
    fwrite(buffer, 1, 256, wfp); // 쓰기용 파일에 1바이트씩 10번 쓰기
    
    /* 파일 닫기 */
    if (fclose(rfp) == EOF)    // 
        printf("Fail to close read-file\n");
    else 
        printf("Success to close read-file\n");
    if (fclose(wfp) == EOF)    // 쓰기용 파일도 닫기
        printf("Fail to close write-file\n");
    else 
        printf("Success to close write-file\n");

    return 0;
}