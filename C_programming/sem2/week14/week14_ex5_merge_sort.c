/*
 * Merge Sort
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define FNAME "inputs/100000/shuffled_integers.txt"
// #define FNAME "inputs/100000/sorted_integers.txt"
// #define FNAME "inputs/100000/reversed_integers.txt"

#define PRINT_ARRAY 0

void merge_sort (int *arr, int N) {
    int i, j, k;   // 탐색을 위한 변수
    int *temp_arr = NULL;

    // 길이가 1일 경우 이미 정렬 완료된 리스트로 가정
    if (N == 1) return;

    // 이등분하여 각각 정렬수행
    merge_sort(arr, N/2);
    merge_sort(arr + N/2, N - N/2);
    
    temp_arr = (int *)malloc(sizeof(int) * N);  // 임시 저장 공간 생성
    // 정렬된 2개의 리스트에 대해 정렬 수행
    i = 0;     j = N/2;     k = 0;
    while (i < N/2 && j < N) {
        if (arr[i] > arr[j])
            temp_arr[k++] = arr[j++];
        else
            temp_arr[k++] = arr[i++];
    }

    // 남아있는 원소들 전부 복사
    while (i < N/2) temp_arr[k++] = arr[i++];
    while (j < N)   temp_arr[k++] = arr[j++];

    // 임시 배열에서 원본 배열로 복사
    memmove(arr, temp_arr, sizeof(int) * N);
        
    // 메모리 해제
    free(temp_arr);
}

// 4, 2, 5, 1, 3
// 4, 2 / 5, 1, 3


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

/******** MERGE SORT ********/

    start = clock(); // 시간 측정 시작
    // merge sort 수행
    merge_sort(data, read_count);
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