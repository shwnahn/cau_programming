#include <stdio.h>

int score[10] = {0};
int i;

int main(void) {
    for (i = 0; i < 10; i++){
        printf("score: %d\n", score[i]);
    }
    return 0;
}

