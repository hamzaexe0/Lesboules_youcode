#include <stdio.h>

int main() {
    int base, exponent, i;
    float result = 1;
    printf("Entrez ton Base apres ton exponent :  \n ");
    scanf("%d %d", &base, &exponent);
    for(i = 0; i < exponent; i++) {
        result *= base;
        printf("%.0lf \n", result);
    }
    return 0;
}