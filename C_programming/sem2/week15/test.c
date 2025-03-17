#include <stdio.h>


// 배열을 출력하는 함수
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 버블 정렬을 수행하는 함수
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // arr[j]와 arr[j + 1]을 교환
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
#include <unistd.h> // usleep 함수를 사용하기 위해 추가

// 한 글자씩 따다닥 출력하는 함수
void printArrayOneByOne(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
        fflush(stdout);
        for (int j = 0; j < 3; j++) {
            printf(".");
            fflush(stdout);
            usleep(100000); // 0.1초 대기
        }
        printf("\b\b\b   \b\b\b"); // 지우기
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, size);

    bubbleSort(arr, size);

    printf("Sorted array: \n");
    printArray(arr, size);

    printf("Printing array one by one: \n");
    printArrayOneByOne(arr, size);

    return 0;
}