#include <stdio.h>
#include <string.h>

typedef struct _student_t {
    char name[20];
    int id;
} student_t;


int main(void){
    student_t s1 = {"Puang1", 20210000};
    student_t s2 = {"Puang2", 20211234};

    student_t *p1 = &s1;
    student_t *p2 = &s2;

    printf("Name: %s\n", (*p1).name);
    printf("id: %d\n", (*p1).id);
    printf("Name: %s\n", p2->name);
    printf("id: %d\n", p2->id);
    printf("SIZE: %d\n", sizeof(p1));
    printf("SIZE: %d\n", sizeof(p2));
}