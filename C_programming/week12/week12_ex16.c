/*
 * 전처리 (SWAP)
 */

#include <stdio.h>

#define NAME "Puang"

int main(void) {
#ifdef NAME
    char name[] = NAME;
    printf("MACRO constant NAME is defined\n");
#else
    char name[] = "Unknown";
#endif

    printf("Name: %s\n", name);

    return 0;
}