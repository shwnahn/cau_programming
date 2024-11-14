/*
 * 메모리 관련 함수 (malloc + free -> malloc)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, cnt = 0;
    char (*malloc_p)[20];
    int capacity = 5; // 따라서 내가 할당받은 메모리의 크기(혹은 배열로 사용할 때 원소의 개수)를 저장할 변수가 필요하다.
    FILE *fp;

    malloc_p = (char (*)[20])malloc(capacity * sizeof(char[20])); // 20바이트 문자열 데이터를 capacity개 저장할 수 있는 동적 메모리를 할당

    fp = fopen("inputs/names.txt", "r");
    while (fscanf(fp, "%s", &malloc_p[cnt]) != EOF) {
        cnt++;
        if (cnt >= capacity) {  // capacity와 비교를 통해서 동적 할당받은 메모리를 전부 사용했는지 체크해야한다.
            printf("[cnt] exceeds the size of malloc_p (cnt:%d) > (size of malloc_p:%d)\n", cnt, capacity);
            printf("free and malloc again at %dth index\n", cnt);
            // 용량(capacity)를 늘려서 다시 할당받는다.
            capacity++;
            free(malloc_p);
            malloc_p = (char (*)[20])malloc(capacity * sizeof(char[20]));
        }
    }

    for (i = 0; i < cnt; i++) {
        printf("malloc_p[%d]: %s\n", i, malloc_p[i]);
    }

    printf("End of file\n");

    // 잊지말자 free!!
    free(malloc_p);
    // 잊지말자 fclose!!
    fclose(fp);

    return 0;
}