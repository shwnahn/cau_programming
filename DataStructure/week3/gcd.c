#include <stdio.h>
#include <stdlib.h>

int gcd(int big, int small){
    if(small == 0) return big;
    gcd(small, big % small);
}

int main(int argc, char * argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int tmp;
    if (a < b){
        tmp = a;
        a = b;
        b = tmp;
    }

    printf("gcd: %d\n", gcd(a, b));
    return 0;
}

