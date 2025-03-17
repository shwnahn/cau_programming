#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myarrlist.h"

// 리스트 생성
int array_list_create(array_list_t **list) {
    if (*list != NULL) // False if a list already exists
        return 0;
    *list = (array_list_t *)malloc(sizeof(array_list_t)); // create list
    // init
    (*list)->len = 0; // 초기 길이 0
    (*list)->capacity = 0;
    (*list)->elements = NULL;
    return 1;
}

// 리스트 제거
int array_list_destroy(array_list_t **list) {
    if (*list == NULL) // False if a list does not exist
        return 0;
    if ((*list)->elements != NULL)
        free((*list)->elements); // 요소 메모리 해제
    free(*list); // 리스트 구조체 메모리 해제
    *list = NULL;
    return 1;
}

// insert
int array_list_insert_first(array_list_t *list, element_t e) {
    if (list == NULL) return 0; // Fail if a list does not exist
    if (list->elements == NULL) { // create array at the first insertion
        list->elements = (element_t *)malloc(sizeof(element_t));
        list->capacity = 1;
    }
    else if (list->len == list->capacity) {
        list->capacity *= 2;
        list->elements = (element_t *)realloc(list -> elements, sizeof(element_t) * (list->capacity));
    }
    // move all elements
    memmove(list->elements + 1, list->elements, sizeof(element_t) * list->len);
    list->elements[0] = e;
    list->len++;
    return 1;
}

// 리스트 끝에 삽입
int array_list_insert_last(array_list_t *list, element_t e) {
    if (list == NULL) return 0; // Fail if a list does not exist
    if (list->elements == NULL) { // create array at the first insertion
        list->elements = (element_t *)malloc(sizeof(element_t));
        list->capacity = 1;
    }
    else if (list->len == list->capacity) {
        list->capacity *= 2;
        list->elements = (element_t *)realloc(list -> elements, sizeof(element_t) * (list->capacity));
    }
    list->elements[list->len] = e; // insert an element into the last index
    list->len++;
    return 1;
}

// 리스트 특정 인덱스에 삽입
int array_list_insert_index(array_list_t *list, element_t e, unsigned int index) {
    if (list == NULL) return 0; // Fail if a list does not exist
    if (list->len <= index) // same as insert last
        return array_list_insert_last(list, e);
    if (list->elements == NULL) { // create array at the first insertion
        list->elements = (element_t *)malloc(sizeof(element_t));
        list->capacity = 1;
    }
    else if (list->len == list->capacity) {
        list->capacity *= 2;
        list->elements = (element_t *)realloc(list -> elements, sizeof(element_t) * (list->capacity));
    }
    // move all elements
    memmove(list->elements + (index + 1), list->elements + index, sizeof(element_t) * (list->len-index));
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