/*
 * fread buffer size에 따른 속도 비교
 */

#include <stdio.h>
#include <time.h>

int main() {
    char *rfname = "inputs/puang_diary.png"; // png는 사진파일의 확장자
    char *wfname = "outputs/puang_diary_copy.png";
    FILE *rfp, *wfp;  // 읽기용 파일 포인터(rfp)와 쓰기용 파일 포인터(wfp)
    char buffer[256];
    int count; // 파일에서 읽은 개수 수를 저장할 변수
    clock_t start, stop;
    
    if ((rfp = fopen(rfname, "rb")) == NULL)
        printf("Fail to open read-file\n");
    else
        printf("Success to open read-file\n");
    if ((wfp = fopen(wfname, "wb")) == NULL)
        printf("Fail to open write-file\n");
    else
        printf("Success to open write-file\n");
    
    // 1바이트, 1개씩
    // start = clock();
    // while ((count = fread(buffer, 1, 1, rfp)) > 0)
    //     fwrite(buffer, 1, count, wfp);
    // stop = clock();
    // printf("size:1, count:1, clock: %d\n", stop - start);

    // 1바이트, 256개씩
    start = clock();
    while ((count = fread(buffer, 1, 256, rfp)) > 0)
        fwrite(buffer, 1, count, wfp);
    stop = clock();
    printf("size:1, count:256, clock: %d\n", stop - start);

    // 256바이트, 1개씩
    // start = clock();
    // while ((count = fread(buffer, 256, 1, rfp)) > 0)
    //     fwrite(buffer, 256, count, wfp);
    // stop = clock();
    // printf("size:256, count:1, clock: %d\n", stop - start);
    
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