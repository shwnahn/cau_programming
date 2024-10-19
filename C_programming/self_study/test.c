#include <stdio.h>
#include <limits.h>

int main(void) {
   int number, min_value = INT_MAX;
   printf("정수를 입력하시오\n종료는 Crtl+z\n");
   
   while(scanf("%d", &number) != EOF)
   {
      if(number < min_value)
         min_value = number;
   }
   printf("푀소값은 %d", min_value);
   return 0 ;
}