#include <stdio.h>

int main()
{
    char s1[] = "Hello";    // 포인터에 문자열 "Hello"의 주소 저장
    
    printf("%lu, %lu, %lu\n", sizeof(s1)/sizeof(char), sizeof(s1), sizeof(char));

    printf("%s\n", s1);    // Hello: %s로 문자열 출력

    return 0;
}