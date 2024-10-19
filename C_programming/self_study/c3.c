#include <stdio.h>

int main() {
    int numArr[5] = { 11, 22, 33, 44, 55 };
    int size = sizeof(numArr)/sizeof(int);
    for(int i = size - 1; i >= 0; i-=2)
        printf("%d\n", numArr[i]);

}