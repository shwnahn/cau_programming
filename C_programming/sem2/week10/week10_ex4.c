/*
 * 파일 쓰기 (w:덮어쓰기)
 */

#include <stdio.h>

int main() {
    char *fname = "outputs/output_ex4.txt";
    FILE *fp;
    int sum = 0, i;
    
    if ((fp = fopen(fname, "w")) == NULL) // 파일을 "덮어"쓰기(w) 모드로 열기
        printf("Fail to open file\n");
    else
        printf("Success to open file\n");

    fputs("Hello, World!\n", fp);   // 파일에 문자열을 쓰기
    fprintf(fp, "This year is %d\n", 2024); // 파일에 형식화된 문자열을 쓰기
    for (i = 1; i <= 10; i++) {
        sum += i;
        fprintf(fp, "Sum of 1 to %d is %d\n", i, sum); // printf와 사용법은 동일하다. 파일 포인터를 추가로 인자로 넣어주는 차이만 존재.
    }
    
    /* 파일 닫기 */
    if (fclose(fp) == EOF)    // fclose의 반환 값을 바로 비교
        printf("Fail to close file\n");
    else 
        printf("Success to close file\n");
    return 0;
}