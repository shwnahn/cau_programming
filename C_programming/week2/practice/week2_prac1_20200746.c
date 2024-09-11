#include <stdio.h>

int main(void) {

    for (int i = 2; i < 10; i++){
        printf("%d times table: ", i);
        for (int j = 1; j < 10; j++){
            printf("%2d * %2d = %2d | ", i, j, i*j);
        }
        printf("\n");
    }
}