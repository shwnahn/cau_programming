#include <stdio.h>

int main(void) {
    int total_score;

    printf("input your total score: ");
    scanf("%d", &total_score);

    switch (total_score / 10) {
        case 10:
        case 9:
            printf("You get an A grade\n");
            break;
        case 8:
            printf("You get a B grade\n");
            break;
        case 7:
            printf("You get a C grade\n");
            break;
        default:
            printf("You get an F grade\n");
            break;
    }

    return 0;
}