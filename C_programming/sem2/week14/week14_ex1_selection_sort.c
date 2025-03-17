/*
 * Selection Sort
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FNAME "inputs/100000/shuffled_integers.txt"
// #define FNAME "inputs/100000/sorted_integers.txt"
// #define FNAME "inputs/100000/reversed_integers.txt"

#define PRINT_ARRAY 0

void selection_sort(int *data, int n) {
    int i;       // 몇 번째 최소값을 찾을 것인지
    int j;       // 최소값을 탐색을 위해 움직일 변수
    int min_idx; // 1번의 탐색에서 현재까지의 최소값의 인덱스를 저장할 변수
    int temp;    // swap을 위한 변수

    for (i = 0; i < n - 1; i++) {
        min_idx = i;                        // 탐색을 시작할 때, 현재까지 확인된 최소값의 인덱스는 i
        for (j = i + 1; j < n; j++) {       // 다음부터 끝까지 탐색
            if (data[j] < data[min_idx]) {  // 최소값을 찾으면
                min_idx = j;                // 최소값의 인덱스를 업데이트
            }
        }
        // 최소값을 찾았으면, i번째와 최소값을 swap
        temp = data[i];
        data[i] = data[min_idx];
        data[min_idx] = temp;
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

/******** SELECTION SORT ********/

    start = clock(); // 시간 측정 시작
    // selection sort 수행
    selection_sort(data, read_count);
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