#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SWAP(x, y) do { int temp = x;   \
                        x = y;          \
                        y = temp; } while (0)


void selection_sort(int *data, int n) {
    int i, j, min_idx;
    /*
    1, 2, 3, 4, 5 가정
    [0]은 제외하고, 3번만 돌리면 됨. N-1
    */
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = 1 + i; j < n; j++) {
            if(data[j] < data[min_idx]) {
                min_idx = j;
            }
        }
        SWAP(data[i], data[min_idx]);
    }
}


void insertion_sort_2(int *data, int n) {
    int i, j, key;
    /*
    1, 2, 0, 4, 5 가정
    i = 1, key = data[i] = 2
        j = 1, for문 성립 없이 끝남.
        끝
    data[j] 에 key 값 넣고 끝
    i = 2, key = data[2] = 0
        j = 2 .. 조건 성립. data[2] = data[1] 삽입.
        j = 1 .. 조건 성립. data[1] = data[0] 삽입.
        끝
    data[j=0]에 key 값 넣고 끝
    */
    for (i = 1; i < n; i++){
        key = data[i];
        for (j = i; j >= 1 && data [j-1] > key; j-- )
            data[j] = data[j - 1];
        data[j] = key;      // 데이터 삽입
    }
}

void insertion_sort_3(int *data, int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = data[i];
        for (j = i; j >= 1 && data[j-1 > key; j--]) {} // j만 이동
        memmove(data + j + 1, data + j, sizeof(int) * (i - j)); // 한번에 move
        data[j] = key; // 삽입
    }
}

void merge_sort(int *arr, int N) {
    int i, j, k;
    int *temp_arr = NULL; // 추가 공간

    // 길이 1이면 정렬 완료된 리스트로 가정.
    if (N == 1) return;

    /*
    1, 2, 3, 4, 5
    N = 5. N/2 = 2
    merge_sort(arr, 2)
    > merge_sort(arr, 1) // return
    > merge_sort(arr + 1,1) // return

    merge_sort(arr + 2, 3). N = 3
    > merge_sort(arr + 2, 1) // return
    > merge_sort(arr + 3, 2)
            >> merge_sort(arr + 3, 1) // return
            >> merge_sort(arr + 4, 1) // return

    */

    // 이등분하여 정렬 수행
    merge_sort(arr, N/2);
    merge_sort(arr + N/2, N - N/2);

    temp_arr = (int *)malloc(sizeof(int) * N);

    /*
    [1, 5], [2, 3, 4]로 한다면
    N = 5
    i = 0, N/2 = 2, j = 2, N = 4, k = 0
    
    temp_arr 에 정렬된 값 저장하기
    while (0(i) < 2, 2(j) < 5)
    arr[0]이 arr[2]보다 작다.
    temp_arr[0]은 arr[0]. k = 1, i = 0 + 1
    arr[1]이 arr[2]보다 크다.
    temp_arr[1]은 arr[2]. k = 2, j = 2 + 1
    temp_arr[2] = arr[3]. k = 3, j = 2 + 2
    temp_arr[3] = arr[4]. k = 4, j = 2 + 3
    j 가 N값이 되었으므로 while문 종료.
    
    i = 1, j = 5, k = 4, N = 5, N/2 = 2
    남아있는거...처리
    while(i < N/2) temp_arr[k] = arr[i]
    1 < 2 이다. temp_arr[4] = arr[1]
    k++, i++. k=5, i=2
    while문 끝
    while(j < N) 끝

    */

   // 정렬된 2개의 리스트에 대해 정렬 수행
   // 비교하여 temp_arr 안에 정렬
    i = 0; j = N/2; k = 0;

    // 주의: i, j, k 모두 while문 밖에 있다!!!
    while (i < N/2 && j < N) { // i가 N/2보다 작고, j가 N보다 작은 동안
        if (arr[i] > arr[j])
            temp_arr[k++] = arr[j++];
        else
            temp_arr[k++] = arr[i++];
    }

    while (i < N/2) temp_arr[k++] = arr[i++];
    while (j < N)   temp_arr[k++] = arr[j++];

    memmove(arr, temp_arr, sizeof(int) * N);

    free(temp_arr);
}