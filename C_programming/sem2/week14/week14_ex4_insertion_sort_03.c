/*
 * Insertion Sort #3 (위치를 찾은 다음에 한 방에 밀어내면?)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define FNAME "inputs/100000/shuffled_integers.txt"
// #define FNAME "inputs/100000/sorted_integers.txt"
// #define FNAME "inputs/100000/reversed_integers.txt"

#define PRINT_ARRAY 0

void insertion_sort(int *data, int n) {
    int i;   // 정렬할 데이터의 인덱스
    int j;   // 비교할 데이터의 인덱스
    int key; // 비교할 데이터를 저장할 변수

    for (i = 1; i < n; i++) {
        key = data[i];                    // 삽입할 데이터를 key에 저장
        for (j = i; j >= 1 && data[j-1] > key; j--) // 적절한 위치를 찾을 때까지 j를 이동하며
        {}                                          // 아무 작업도 하지 않음
        /** 이 시점에 j는 key가 들어갈 위치를 가리키고 있음 **/
        memmove(data + j + 1, data + j, sizeof(int) * (i - j)); // 한 번에 밀어내기
        data[j] = key;                                          // 삽입할 데이터를 삽입
    }
}

int main(void) {
    FILE *fp;   // 파일과 관련된 변수

    // resizing array를 위한 변수
    int *data;
    int capacity;

    // 실제로 읽은 데이터의 개수를 저장하는 변수
    int read_count = 0;

    // 시간 측정을 위한 변수 (시작, 끝에 시간을 측정한 뒤 차이로 수행시간을 구한다!)
    clock_t start, end;
    
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

/******** INSERTION SORT ********/

    start = clock(); // 시간 측정 시작
    // insertion sort 수행
    insertion_sort(data, read_count);
    end = clock(); // 시간 측정 끝

    // 수행시간 출력
    printf("\nElapsed time: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

/********************************/
    
/******** 정렬 여부 확인 ********/
#if PRINT_ARRAY == 1
    for (i = 0; i < read_count; i++)
        printf("%d ", data[i]);
    printf("\n", data[i]);
#endif
    for (i = 0; i < read_count - 1; i++)
        if (data[i] > data[i + 1]) break;

    if (i == read_count - 1) printf("Sorted!\n");
    else                     printf("Not sorted!\n");
/********************************/

    // 메모리 해제 (잊지말자 free!)
    free(data);

    return 0;
}