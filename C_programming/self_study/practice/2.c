#include <stdio.h>

int main(void)
{
    int score[5];


    score[0]  = 78;
    score[1] = 98;
    score[2] = 87;
    // score[3] 값 누락
    score[4] = 92;

    printf("score[0]: %d\n", score[0]);
    printf("score[1]: %d\n", score[1]);
    printf("score[2]: %d\n", score[2]);
    printf("score[3]: %d\n", score[3]);
    printf("score[4]: %d\n", score[4]);

    printf("score[5]: %d\n", score[5]);

}