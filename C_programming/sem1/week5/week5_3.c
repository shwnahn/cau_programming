#include <stdio.h>

int main(void) {
    int x = 10, y = 20;
    int result1, result2;

    result1 = (x > 10) && (++y == 10); // 앞에서 false(0), 뒤 부분은 연산 안 함
    printf("%d\n", y);  // ++y 적용 안 됨

    result2 = (x > 0) && (++y == 10); 
    printf("%d\n", y);

    return 0;
}