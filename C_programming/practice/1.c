#include <stdio.h>

int main(void) {
    char a;
    printf("Type anything: ");
    scanf("%c", &a);
    printf("it is %s\n", &a);    

    return 0;
}
