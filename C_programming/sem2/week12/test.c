#include <stdio.h>

int main() {
    #ifdef TARGET
        printf("TARGET IS DEFINED: %s", TARGET);
    #else
        printf("TARGET IS not DEFINED");
    #endif
        return 0;
}