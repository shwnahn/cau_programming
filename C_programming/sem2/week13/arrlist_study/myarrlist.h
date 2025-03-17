typedef int element_t;

typedef struct _array_list_t {
    unsigned int capacity;
    unsigned int len;
    element_t *elements;
} array_list_t;

// create / destroy
int array_list_create (array_list_t **list);
int array_list_destroy(array_list_t **list);
// insert
int array_list_insert_first (array_list_t *list, element_t e);
int array_list_insert_last  (array_list_t *list, element_t e);
int array_list_insert_index (array_list_t *list, element_t e, unsigned int index);
// delete
int array_list_delete_first (array_list_t *list);
int array_list_delete_last  (array_list_t *list);
int array_list_delete_index (array_list_t *list, unsigned int index);
// search
element_t* array_list_search_by_index (array_list_t *list, unsigned int index);
element_t* array_list_search_by_value (array_list_t *list, element_t e);