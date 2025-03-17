#include <stdio.h>
#include "myarrlist.h"

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