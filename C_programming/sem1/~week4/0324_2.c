#include <stdio.h>

int main(void){
    float a = 0.1;
    double b = 0.1;
    printf("%0.20f\n", a);
    printf("%0.20lf\n", b);

    return 0;
}