#include <stdio.h>

int main(void) {
    unsigned int N;
    unsigned int i;
    unsigned int time_table[9] = {0};
    
    printf("input: ");
    scanf("%u", &N);
    for (i=0; i<9; i++) {
        time_table[i] = N * (i+1);
    }

    for (i=0; i<9; i++) {
        printf("%d * %d = %d\n", N, i+1, time_table[i]);
    }
    printf("Done\n");
    return 0;
    
}