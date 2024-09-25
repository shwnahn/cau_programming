/*
 * 포인터 변수의 형변환
 */

#include <stdio.h>

int main(void)
{
    int int_number = 0x12345678; 
    char *p_1byte; 
    short *p_2bytes;
    int i;
    
    p_1byte  = (char  *)&int_number;
    p_2bytes = (short *)&int_number;
    
    printf("==== 1byte ====\n");
    /* int가 4bytes이고, char가 1byte이므로
       아래 문장은 for (i = 0; i < 4; i++)와 동일 */
    for (i = 0; i < sizeof(int)/sizeof(char); i++) {
        printf("0x%X\n", *p_1byte);
        p_1byte++;
    }

    printf("==== 2bytes ====\n");
    /* int가 4bytes이고, short가 2bytes이므로
       아래 문장은 for (i = 0; i < 2; i++)와 동일 */
    for (i = 0; i < sizeof(int)/sizeof(short); i++) {
        printf("0x%X\n", *p_2bytes);
        p_2bytes++;
    }
    
    return 0;
}
