/*
 * Indentation and TAB Space 예제
 */

#include <stdio.h>

// C언어에서는 한줄에 여러 실행문을 작성할 수 있다.
void print_times_table_1(void) {int i; int j;for (i = 2; i <= 9; i++) {for (j = 1; j <= 9; j++) {printf("%d*%d:%2d | ", i, j, i * j);}printf("\n");}}

// 공백 또한 영향을 미치지 않는다.
void print_times_table_2(void) {
int i; int j;
for (i = 2; i <= 9;            i++) {       
for (j = 1;                              j <= 9; j++) {
printf("%d*%d:%2d | ", i, j, i * j);
}
printf("\n");
}
}

// 다만, 들여쓰기와 공백은 가독성을 높이기 위해 사용되는 것이므로, 적절한 사용이 필요하다.
void print_times_table_3(void) {
    int i; int j;
    for (i = 2; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d*%d:%2d | ", i, j, i * j);
        }
        printf("\n");
    }
}

/* 
 * 따라서, 공백이 2칸일수도, 4칸일수도, 8칸일수도 있으며,
 * 이는 회사/팀의 코드 스타일에 따라 다르게 정해질 수 있다.
 */
void print_times_table_4(void) {
  int i; int j;
  for (i = 2; i <= 9; i++) {
    for (j = 1; j <= 9; j++) {
      printf("%d*%d:%2d | ", i, j, i * j);
    }
    printf("\n");
  }
}

int main(void) {
    print_times_table_1();
    print_times_table_2();
    print_times_table_3();
    print_times_table_4();

    return 0;
}