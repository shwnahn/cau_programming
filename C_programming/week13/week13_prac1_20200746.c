#include <stdio.h>
#include <stdlib.h>
#include "myarrlist.h"

#define INITIAL_CAPACITY 8 // 초기 용량 정의

// 배열 크기를 재조정하기 위한 함수
static int resize_array(array_list_t *list, unsigned int new_capacity) {
    element_t *new_elements = (element_t *)realloc(list->elements, new_capacity * sizeof(element_t));
    if (!new_elements) {
        return 0; // 메모리 재할당 실패
    }
    list->elements = new_elements;
    list->capacity = new_capacity;
    return 1; // 성공
}

// 리스트 생성
int array_list_create(array_list_t **list) {
    if (!list) return 0;

    *list = (array_list_t *)malloc(sizeof(array_list_t));
    if (!(*list)) return 0;

    (*list)->capacity = INITIAL_CAPACITY; // 초기 용량 설정
    (*list)->len = 0; // 초기 길이 0
    (*list)->elements = (element_t *)malloc(INITIAL_CAPACITY * sizeof(element_t));
    if (!(*list)->elements) {
        free(*list);
        *list = NULL;
        return 0;
    }

    return 1;
}

// 리스트 제거
int array_list_destroy(array_list_t **list) {
    if (!list || !(*list)) return 0;

    free((*list)->elements); // 요소 메모리 해제
    free(*list); // 리스트 구조체 메모리 해제
    *list = NULL;
    return 1;
}

// 리스트 처음에 삽입
int array_list_insert_first(array_list_t *list, element_t e) {
    return array_list_insert_index(list, e, 0);
}

// 리스트 끝에 삽입
int array_list_insert_last(array_list_t *list, element_t e) {
    return array_list_insert_index(list, e, list->len);
}

// 리스트 특정 인덱스에 삽입
int array_list_insert_index(array_list_t *list, element_t e, unsigned int index) {
    if (!list || index > list->len) return 0;

    if (list->len == list->capacity) { // 용량이 부족하면 두 배로 확장
        if (!resize_array(list, list->capacity * 2)) return 0;
    }

    for (unsigned int i = list->len; i > index; i--) {
        list->elements[i] = list->elements[i - 1];
    }
    list->elements[index] = e; // 요소 삽입
    list->len++;
    return 1;
}

// 리스트 처음 요소 삭제
int array_list_delete_first(array_list_t *list) {
    return array_list_delete_index(list, 0);
}

// 리스트 마지막 요소 삭제
int array_list_delete_last(array_list_t *list) {
    if (!list || list->len == 0) return 0;

    list->len--; // 길이 감소
    if (list->len <= list->capacity / 4 && list->capacity > INITIAL_CAPACITY) {
        resize_array(list, list->capacity / 2); // 필요시 용량 축소
    }

    return 1;
}

// 리스트 특정 인덱스 요소 삭제
int array_list_delete_index(array_list_t *list, unsigned int index) {
    if (!list || index >= list->len) return 0;

    for (unsigned int i = index; i < list->len - 1; i++) {
        list->elements[i] = list->elements[i + 1];
    }
    list->len--; // 길이 감소

    if (list->len <= list->capacity / 4 && list->capacity > INITIAL_CAPACITY) {
        resize_array(list, list->capacity / 2); // 필요시 용량 축소
    }

    return 1;
}

// 인덱스로 요소 검색
element_t *array_list_search_by_index(array_list_t *list, unsigned int index) {
    if (!list || index >= list->len) return NULL;
    return &list->elements[index];
}

// 값으로 요소 검색
element_t *array_list_search_by_value(array_list_t *list, element_t e) {
    if (!list) return NULL;

    for (unsigned int i = 0; i < list->len; i++) {
        if (list->elements[i] == e) {
            return &list->elements[i];
        }
    }

    return NULL;
}

int main(void) {
    int i;
    array_list_t *list = NULL;
    array_list_create(&list);

    if (list == NULL) {
        printf("creation failed\n");
        return 1;
    }

    // TEST #1
    printf("======== TEST #1 ========\n");
    for (i = 0; i < 10; i++)
        array_list_insert_last(list, (i+1) * 22);
    printf("list = [");
    for (i = 0; i < list->len; i++)
        printf("%d, ", list->elements[i]);
    printf("]\n");
    printf("capacity: %d, length: %d\n", list->capacity, list->len);

    // TEST #2
    printf("======== TEST #2 ========\n");
    for (i = 0; i < 5; i++)
        array_list_delete_first(list);
    printf("list = [");
    for (i = 0; i < list->len; i++)
        printf("%d, ", list->elements[i]);
    printf("]\n");
    printf("capacity: %d, length: %d\n", list->capacity, list->len);

    // TEST #3
    printf("======== TEST #3 ========\n");
    for (i = 0; i < 10; i++)
        array_list_insert_first(list, (i+1) * 33);
    printf("list = [");
    for (i = 0; i < list->len; i++)
        printf("%d, ", list->elements[i]);
    printf("]\n");
    printf("capacity: %d, length: %d\n", list->capacity, list->len);

    // TEST #4
    printf("======== TEST #4 ========\n");
    for (i = 0; i < 5; i++)
        array_list_delete_last(list);
    printf("list = [");
    for (i = 0; i < list->len; i++)
        printf("%d, ", list->elements[i]);
    printf("]\n");
    printf("capacity: %d, length: %d\n", list->capacity, list->len);

    // TEST #5
    printf("======== TEST #5 ========\n");
    for (i = 0; i < 10; i++)
        array_list_insert_index(list, (i+1) * 44, i);
    printf("list = [");
    for (i = 0; i < list->len; i++)
        printf("%d, ", list->elements[i]);
    printf("]\n");
    printf("capacity: %d, length: %d\n", list->capacity, list->len);

    // TEST #6
    printf("======== TEST #6 ========\n");
    for (i = 0; i < 5; i++)
        array_list_delete_index(list, i);
    printf("list = [");
    for (i = 0; i < list->len; i++)
        printf("%d, ", list->elements[i]);
    printf("]\n");
    printf("capacity: %d, length: %d\n", list->capacity, list->len);

    // TEST #7
    printf("======== TEST #7 ========\n");
    printf("search by index: %d\n", *array_list_search_by_index(list, 2));
    printf("search by value: %d\n", *array_list_search_by_value(list, 88));

    // TEST #8
    printf("======== TEST #8 ========\n");
    while (array_list_delete_first(list)) {}
    printf("list = [");
    for (i = 0; i < list->len; i++)
        printf("%d, ", list->elements[i]);
    printf("]\n");
    printf("capacity: %d, length: %d\n", list->capacity, list->len);



    array_list_destroy(&list);
    if (list != NULL) {
        printf("destruction failed\n");
        return 1;
    }

    return 0;
}