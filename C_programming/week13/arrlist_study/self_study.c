/**
int 자료형에 대한 리스트를 구현한다. 리스트는 Re-sizing Array List로 구현한다.
사용자의 입력에 따라 원소를 추가, 삭제, 탐색하는 프로그램을 위한 main.c 파일과
myarrlist.h 헤더파일이 주어질 때 이를 구현하기 위한 리스트 API 파일을 작성하시오.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myarrlist.h"

int array_list_create (array_list_t **list) {
    if (*list != NULL) // list가 이미 존재하면 False
        return 0;
    *list = (array_list_t *)malloc(sizeof(array_list_t)); // 리스트 생성
    // 배열 초기화
    (*list)->len = 0;
    (*list)->capacity = 0;
    (*list)->elements = NULL; 
    return 1; // 성공
}

int array_list_destroy (array_list_t **list) {
    if (*list == NULL) // list가 이미 존재하면 False
        return 0;
    if ((*list)->elements != NULL)
        free((*list)->elements);
    free(*list);
    *list = NULL;
    return 1;
}

int array_list_insert_first (array_list_t *list, element_t e) {
    if (list == NULL) return 0; // list 가 없으면 False
    if (list->elements == NULL) {// 요소 첫 삽입이면 list 생성
        list->elements = (element_t *)malloc(sizeof(element_t));
        list->capacity =1;
    }
    else if (list->len == list->capacity) { // 새 요소 삽입 위해 메모리 재할당
        list->capacity *= 2;
        list->elements = (element_t *)realloc(list->elements, sizeof(element_t) * (list->capacity));
    }
    // 전체 요소 한칸 뒤로 옮기기
    memmove(list->elements + 1, list->elements, sizeof(element_t) * list->len);
    list->elements[0] = e;
    list->len++;
    return 1;
}

int array_list_insert_last (array_list_t *list, element_t e) {
    if (list == NULL) return 0; // list 가 없으면 False
    if (list->elements == NULL) {// 요소 첫 삽입이면 list 생성
        list->elements = (element_t *)malloc(sizeof(element_t));
        list->capacity =1;
    }
    else if (list->len == list->capacity) { // 새 요소 삽입 위해 메모리 재할당
            list->capacity *= 2;
            list->elements = (element_t *)realloc(list->elements, sizeof(element_t) * (list->capacity));
        }
    list->elements[list->len] = e; // 마지막 index에 삽입
    list->len++; // list의 길이 값 늘리기
    return 1;
}

int array_list_insert_index (array_list_t *list, element_t e, unsigned int index) {
    if (list == NULL) return 0;
    if (list->len <= index)     // list 의 길이가 index보다 작으면... insert last 와 같다
        return array_list_insert_last(list, e);
    if (list->elements == NULL) {// 요소 첫 삽입이면 list 생성
        list->elements = (element_t *)malloc(sizeof(element_t));
        list->capacity = 1;
    }
    else if (list->len == list->capacity){                      // 요소 삽입 위해서 새로 메모리 할당
        list->capacity *= 2;
        list->elements = (element_t *)realloc(list->elements, sizeof(element_t) * (list->capacity));
    }
    // index + 1 위치로, index 위치부터의 elements 이동
    memmove(list->elements + (index + 1), list->elements + index, sizeof(element_t) * (list->len-index));
    list->elements[index] = e;
    list->len++;
    return 1;
}

int array_list_delete_first (array_list_t *list) {
    if (list == NULL || list->len ==0) return 0; // 리스트가 없으면 False

    // 삭제하면 element 없다면 할당해둔 list free 처리
    if(list->len == 1) {
        free(list->elements);
        list->elements = NULL; list->len--; list->capacity = 0;
        return 1;
    }
    // 모든 요소 이동
    memmove(list->elements, list->elements + 1, sizeof(element_t) * (list->len - 1));
    list->len--;
    // 할당 줄이기
    if (list->len == list->capacity/4) {
        list->capacity /= 2;
        list->elements = (element_t *)realloc(list->elements, sizeof(element_t) * (list->capacity));
    }
    return 1;
}

int array_list_delete_last (array_list_t *list) {
    if (list == NULL || list->len == 0) return 0; // 리스트가 없으면 False
    // 삭제하면 element 없다면 할당해둔 list free 처리
    if(list->len == 1) {
        free(list->elements);
        list->elements = NULL; list->len--; list->capacity = 0;
        return 1;
    }
    list->len--;
    // 그냥 할당 줄이면 됨
    if (list->len == list->capacity/4) {
        list->capacity /= 2;
        list->elements = (element_t *)realloc(list->elements, sizeof(element_t) * (list->capacity));
    }
    return 1;
}

int array_list_delete_index (array_list_t *list, unsigned int index) {
    if (list == NULL || list->len ==0) return 0; // 리스트가 없으면 False
    // 삭제하면 element 없다면 할당해둔 list free 처리
    if(list->len == 1) {
        free(list->elements);
        list->elements = NULL; list->len--; list->capacity = 0;
        return 1;
    }
    if (list->len - 1 <= index)
        return array_list_delete_last(list);
    // 모든 요소 이동
    memmove(list->elements + index, list->elements + index + 1, sizeof(element_t) * (list->len - 1 - index));
    list->len--;
    // 할당 줄이기
    if (list->len == list->capacity/4) {
        list->capacity /= 2;
        list->elements = (element_t *)realloc(list->elements, sizeof(element_t) * (list->capacity));
    }
    return 1;
}

element_t* array_list_search_by_index (array_list_t *list, unsigned int index) {
    if (list == NULL || list->len == 0) return NULL;
    if (list->len <= index) return NULL;
    return &(list->elements[index]);
}

element_t* array_list_search_by_value (array_list_t *list, element_t e) {
    int i;
    if (list == NULL || list->len == 0) return NULL;
    for (i = 0; i < list->len; i++) {
        if(list->elements[i] == e) return &(list->elements[i]);
    }
    return NULL;
}