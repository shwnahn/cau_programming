/*
 * 메모리 관련 함수 (malloc + free -> malloc)
 */

#include <stdio.h>
#include <stdlib.h>


/* 파일의 내용을 계속해서 추가하고 싶은데...
 * 파일의 내용이 몇개인지 사전에 알지 못한다...
 */
int main(void) {
    int i, cnt = 0; // 인덱스 0으로 초기화
    // 배열포인터! char 타입 20개를 저장할 수 있는 배열에 대한 포인터 --> 문자열에 대한 포인터
    char (*malloc_p)[20] = (char (*)[20])malloc(5 * sizeof(char[20])); // 20바이트 문자열 데이터를 5개 저장할 수 있는 동적 메모리를 할당
    FILE *fp;

    // inputs 폴더의 names.txt 파일을 읽기 모드로 열기
    fp = fopen("inputs/names.txt", "r");
    while (fscanf(fp, "%s", &malloc_p[cnt]) != EOF) { // 파일에서 읽은 값을 malloc_p에 저장
        cnt++;  
    }
    
    for (i = 0; i < cnt; i++) {
        printf("malloc_p[%d]: %s\n", i, malloc_p[i]);   // 읽은 값 출력
    }


    printf("End of file\n");

    // 잊지말자 free!!
    free(malloc_p);
    // 잊지말자 fclose!!
    fclose(fp);

    return 0;
}
