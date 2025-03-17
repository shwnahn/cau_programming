#include <stdio.h>

int main(void) {
    int input;
    int number;

    while(1) {
        printf("Select option: ");
        scanf("%d", &input);

        switch (input){

            case 0:
                printf("Bye bye~");
                return 0;

            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);

                if (number > 0) {
                    // 밑변과 높이가 n인 직각삼각형, *문자
                    for (int i = 0; i < number; i++) { // 높이
                        for (int j = 1; j <= number - i - 1; j++) { // 밑변
                            printf(" ");
                        }

                        for (int k = 0; k <= i; k++) { // 밑변
                            printf("%s", "*");
                        }
                        printf("\n");
                    }
                } else {
                    printf("Invalid input\n");
                }
                break;
                

            case 2:
                printf("Enter a number: ");
                scanf("%d", &number);

                if (number > 0) {
                    // 가로세로가 2*n-1인 십자가, +문자
                    for (int i = 0; i < number - 1; i++) {//높이
                        for (int l = 0; l < number - 1; l++){
                            printf("%s", " ");
                        }
                        printf("%s", "+\n");
                    }
                    for (int j = 0; j < number * 2 - 1; j++){
                        printf("%s", "+");
                    }
                    printf("\n");
                    for (int k = 0; k < number - 1; k++) {//높이
                        for (int l = 0; l < number - 1; l++){
                            printf("%s", " ");
                        }
                        printf("%s", "+\n");
                    }
                } else {
                    printf("Invalid input\n");
                }
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &number);
                
                if (number > 0) {
                    // 가로세로가 2*n-1인 X모양, x문자
                    // X모양 위쪽
                    for (int i = 0; i < number - 1; i++) { // 높이
                        for (int a = 0; a < i ; a++) { // 앞쪽공백
                            printf("%s", " ");
                        }
                        printf("%s", "x"); // 1번째 X
                        for (int b = 0; b < (number - i - 1) * 2 - 1; b++) {
                            printf("%s", " "); // 사이공백
                        }
                        printf("%s", "x\n"); // 2번째 X
                    }
                    // X모양 가운데
                    for (int j = 0; j < number - 1 ; j++) { // 앞쪽공백
                            printf("%s", " ");
                        }
                    printf("%s", "x\n");

                    // X모양 아랫쪽
                    for (int k = 0; k < number - 1; k++) { // 높이
                        for (int a = 0; a < number - k - 2 ; a++) { // 앞쪽공백
                            printf("%s", " ");
                        }
                        printf("%s", "x"); // 1번째 X
                        for (int b = 0; b < 2 * k + 1; b++) {
                            printf("%s", " "); // 사이공백
                        }
                        printf("%s", "x\n"); // 2번째 X
                    }
                } else {
                    printf("Invalid input\n");
                }
                break;

            default:
                printf("Invalid option\n");
                break;
        }
    }
    
    return 0;
}