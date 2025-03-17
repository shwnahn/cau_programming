#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;

    fp = fopen("hw4_input.txt", "r");
    if (fp == NULL)
        printf("Fail to open file\n");
    else
        printf("Success to open file\n");
    
    fscanf(fp, "")

    printf("fstate: %d\n",  fclose(fp));




    return 0;
}