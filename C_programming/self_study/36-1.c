#include <stdio.h>

int main()
{
    int decimal;
    printf("값을 입력하세요: ");
    scanf("%d", &decimal);

    int binary[20] = { 0 };

    int position = 0;
    while (1)
    {
        binary[position] = decimal % 2;
        decimal /= 2;

        position ++;

        if (decimal == 0)
            break;
    }

    for (int i = position - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    printf("\n");
    return 0;
}