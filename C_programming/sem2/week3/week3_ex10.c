#include <stdio.h>

int main (int argc, char **argv) {
    int i;
    printf("# of parameters : %d\n", argc);
    for (i = 0; i < argc; i++)
        printf("arg(%d):%s\n", i, argv[i]);
    return 0;
}