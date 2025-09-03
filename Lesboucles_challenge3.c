#include <stdio.h>

int main() {
    int n;
    float factorial = 0;

    printf("Entrez un numéro: \n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur! La factorielle d'un nombre négatif n'existe pas.\n");
    } else {
        printf("La somme est: ");
        for (int i = n; i >= 1; --i) {
            factorial += i;
            printf("%d", i);

            if (i > 1) {
                printf(" + ");
            }
        }
        printf(" = %.1lf\n", factorial);
    }

    return 0;
}