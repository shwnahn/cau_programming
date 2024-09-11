#include <stdio.h>

int main(void) {
    float number = 123.456;
    int number2 = 200;
    
    printf("%f\n", number);
    printf("%.2f\n", number);
    printf("%7.1f\n", number);

    printf("%d\n", number2);
    printf("%10.1d\n", number2);
    
    return 0;

}