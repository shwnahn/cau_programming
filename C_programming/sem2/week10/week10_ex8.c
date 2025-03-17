/*
 * 파일 끝까지 읽기(fscanf)
 */

#include <stdio.h>

int main() {
    char *fname = "inputs/popular_names.txt";
    FILE *fp;
    char name[10];   // 이름을 저장할 문자열 변수
    int num;         // 출생신고건수를 저장할 정수 변수
    
    if ((fp = fopen(fname, "r")) == NULL)
        printf("Fail to open file\n");
    else
        printf("Success to open file\n");

    
    while (fscanf(fp, "%s %d", name, &num) == 2) // 이름과 건수를 정상적으로 입력받으면 리턴값은 2
        printf("Name: %10s, Number: %d\n", name, num);
    

    if (fclose(fp) == EOF)
        printf("Fail to close file\n");
    else 
        printf("Success to close file\n");
    return 0;
}

// 실패 시 
// fopen -> NULL
// fclose -> EOF

// fscanf -> NULL . 개수
// fgets -> EOF . 주소.
// fread -> 0