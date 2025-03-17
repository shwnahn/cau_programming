#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    double *numPtr = malloc(sizeof(*numPtr));

    memset(numPtr, 0x27, 8);
    memset(numPtr, 0, 8);

    printf("0x%llx\n", *numPtr);

    printf("Allocated memory size: %zu bytes\n", sizeof(*numPtr));


    free(numPtr);


    return 0;
}