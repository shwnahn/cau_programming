/*
 * 파일에서 정수를 읽어 배열에 저장하고, 그 배열을 출력하는 방법
 */

#include <stdio.h>
#include <stdlib.h>

#define FNAME "inputs/100/shuffled_integers.txt"
// #define FNAME "inputs/100/sorted_integers.txt"
// #define FNAME "inputs/100/reversed_integers.txt"

int main(void) {
    FILE *fp;   // 파일과 관련된 변수
    // resizing array를 위한 변수
    int *data;
    int capacity;
    // 실제로 읽은 데이터의 개수를 저장하는 변수
    int read_count = 0;
    int i;

    // 파일 열기
    fp = fopen(FNAME, "r");
    if (fp == NULL) {
        printf("Failed to open file: %s\n", FNAME);
        return 1;
    }

    capacity = 1;
    data = (int *)malloc(sizeof(int) * capacity);
    if (data == NULL) {
        printf("Failed to allocate memory!\n");
        fclose(fp); // 이 시점에는 파일 열기에는 성공한 상태이므로 파일을 닫아야함.
        return 1;
    }

    // 파일 읽기
    while (fscanf(fp, "%d", &data[read_count]) == 1) { // 읽기에 성공하면
        read_count++;   // 읽은 개수 증가
        if (read_count >= capacity) { // 용량이 다 차면 2배로 늘림
            capacity *= 2;
            data = (int *)realloc(data, sizeof(int) * capacity);
            // realloc 실패 시 종료
            if (data == NULL) {
                printf("Failed to reallocate memory!\n");
                fclose(fp);
                return 1;
            }
        }
    }

    // 파일 닫기
    fclose(fp);

    // 실제 읽은 데이터의 수만큼 메모리를 조정
    data = (int *)realloc(data, sizeof(int) * read_count);

    // 읽은 데이터 출력
    printf("Read %d integers: ", read_count);
    for (i = 0; i < read_count; i++) {
        printf("%d ", data[i]);
    }

    // 메모리 해제 (잊지말자 free!)
    free(data);

    return 0;
}