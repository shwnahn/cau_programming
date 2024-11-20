/*
 * 운영체제에 따라 자료형의 크기가 따를 때 동작하는 코드를 작성하는 방법
 */

#include <stdio.h>

#define CONTIKI 1
#define LINUX 2
#define WINDOWS 3

/*
 * 컴파일 단계에서 -D 옵션으로 매크로 값을 지정할 수 있다.
   * gcc -o [run.exe] [source.c] -D[MACRO_NAME]=[VALUE]
     ex) gcc -o week12_ex17.exe week12_ex17.c -DSYSTEM=CONTIKI
         (단 위 예제에서 당연히 CONTIKI는 정의가 되어있어야한다.)
 */

#if (SYSTEM == CONTIKI)
    typedef unsigned long uint32_t;
    #define debug_print printf("Contiki// "); printf 
#elif (SYSTEM == LINUX)
    typedef unsigned int uint32_t;
    #define debug_print printf("Linux// "); printf 
#elif (SYSTEM == WINDOWS)
    typedef unsigned int uint32_t;
    #define debug_print printf("Windows// "); printf 
#else
    #error "Unknown system"
    #define debug_print (void)
#endif

int main(void) {
    uint32_t a = 10;
    debug_print("a: %u\n", a);

    return 0;
}