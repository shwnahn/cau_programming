#include <stdio.h>

int main(void) {
    int a = 1, b = 0;
    
    // &&
    printf("a(%d) && b(%d) : %d\n", a, b, a && b);  // 1 && 0 (true && false)
    printf("a(%d) && a(%d) : %d\n", a, a, a && a);  // 1 && 1 (true && true)
    printf("b(%d) && b(%d) : %d\n\n", b, b, b && b);// 0 && 0 (false && false)
    // ||
    printf("a(%d) || b(%d) : %d\n", a, b, a || b);  // 1 || 0 (true || false)
    printf("a(%d) || a(%d) : %d\n", a, a, a || a);  // 1 || 1 (true || true)
    printf("b(%d) || b(%d) : %d\n\n", b, b, b || b);// 0 || 0 (false || false)
    // !
    printf("   !a(%d)   : %d\n", a, !a);            // !1 (not true)
    printf("   !b(%d)   : %d\n", b, !b);            // !0 (not false)
    
    return 0;
}
