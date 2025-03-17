/*
 * 메모리 관련 함수 (malloc + free -> malloc)
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 만약 현재까지 읽은 문자열의 개수가 5개를 넘어가면
 * 메모리를 다시 할당하면 되지 않을까?
 */
int main(void) {
    int i, cnt = 0;
    char (*malloc_p)[20] = (char (*)[20])malloc(5 * sizeof(char[20]));
    FILE *fp;

    fp = fopen("inputs/names.txt", "r");
    while (fscanf(fp, "%s", &malloc_p[cnt]) != EOF) {
        cnt++;
        if (cnt >= sizeof(malloc_p)/sizeof(char (*)[20])) { // sizeof(배열)/sizeof(배열의 원소)를 통해서 배열의 크기를 구할 수 있었지!
            printf("[cnt] exceeds the size of malloc_p (cnt:%d) > (size of malloc_p:%d)\n", cnt, sizeof(malloc_p)/sizeof(char (*)[20]));
            printf("free and malloc again at %dth index\n", cnt);
            // 메모리를 다시 해제하고 다시 할당!
            free(malloc_p);
            malloc_p = (char (*)[20])malloc( (cnt+1) * sizeof(char[20]));
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
