#include <stdio.h>

int main(void) {
    int matier1, matier2, matier3, matier4, matier5;
    float moyenne;

    int note;
    printf("Entrez la première note (1-100): ");
    scanf("%d", &note);
    while (note <= 0 || note > 100) {
        printf("Note invalide. Réessayez: ");
        scanf("%d", &note);
    }
    matier1 = note;

    printf("Entrez la deuxième note (1-100): ");
    scanf("%d", &note);
    while (note <= 0 || note > 100) {
        printf("Note invalide. Réessayez: ");
        scanf("%d", &note);
    }
    matier2 = note;

    printf("Entrez la troisième note (1-100): ");
    scanf("%d", &note);
    while (note <= 0 || note > 100) {
        printf("Note invalide. Réessayez: ");
        scanf("%d", &note);
    }
    matier3 = note;

    printf("Entrez la quatrième note (1-100): ");
    scanf("%d", &note);
    while (note <= 0 || note > 100) {
        printf("Note invalide. Réessayez: ");
        scanf("%d", &note);
    }
    matier4 = note;

    printf("Entrez la cinquième note (1-100): ");
    scanf("%d", &note);
    while (note <= 0 || note > 100) {
        printf("Note invalide. Réessayez: ");
        scanf("%d", &note);
    }
    matier5 = note;


    printf("\n--- Notes entrées ---\n");
    printf("- Matière 1 : %d\n", matier1);
    printf("- Matière 2 : %d\n", matier2);
    printf("- Matière 3 : %d\n", matier3);
    printf("- Matière 4 : %d\n", matier4);
    printf("- Matière 5 : %d\n", matier5);


    moyenne = (matier1 + matier2 + matier3 + matier4 + matier5) / 5.0;

    printf("La moyenne générale est : %.2f\n", moyenne);
