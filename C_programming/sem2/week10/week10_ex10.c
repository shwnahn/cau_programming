/*
 * 파일 끝까지 읽기(fread)
 */

#include <stdio.h>

int main() {
    char *rfname = "inputs/CAU_emblem.png"; // png는 사진파일의 확장자
    char *wfname = "outputs/CAU_emblem_copy.png";
    FILE *rfp, *wfp;  // 읽기용 파일 포인터(rfp)와 쓰기용 파일 포인터(wfp)
    char buffer[256];
    int count; // 파일에서 읽은 개수 수를 저장할 변수
    
    if ((rfp = fopen(rfname, "rb")) == NULL)
        printf("Fail to open read-file\n");
    else
        printf("Success to open read-file\n");

    if ((wfp = fopen(wfname, "wb")) == NULL)
        printf("Fail to open write-file\n");
    else
        printf("Success to open write-file\n");

    while (1) {
        count = fread(buffer, 1, 256, rfp); // 파일에서 1바이트씩 256번 읽어 buffer에 저장. 반환 값은 읽은 개수
        if (count == 0) // 읽은 개수가 0이면 파일의 끝에 도달했음을 의미
            break;
        fwrite(buffer, 1, count, wfp); // 파일에 1바이트씩 읽은 개수 만큼 쓰기
    }
    // 합쳐서 while문을 간결하게 표현
    /*
    while ((count = fread(buffer, 1, 256, rfp)) > 0)
        fwrite(buffer, 1, count, wfp);
    */

    
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