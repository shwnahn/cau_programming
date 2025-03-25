#include <stdio.h>
#define MAX_DEGREE 1000

typedef struct {
    int degree;
    float coef[MAX_DEGREE];
} Polynomial;

void printPolynomial(Polynomial p) {
    for (int i = p.degree; i >= 0; i--) {
            if (i != p.degree) {
                printf(" + ");
            }
            printf("%.1fx^%d", p.coef[i], i);
        }

    printf("\n");
}

int main(void) {
    Polynomial p = {3, {4.0, 0.0, 3.0, 2.0}};
    printPolynomial(p);
}