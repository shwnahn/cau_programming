#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[32] = "My name is ";
    char str2[32] = "Mingyu Park";
    char str3[32];

    sprintf(str3, "%s%s", str1, str2);
    printf("%s\n", str3);

    sprintf(str3, "I'm %s", str2);
    printf("%s\n", str3);
    
    return 0;
}