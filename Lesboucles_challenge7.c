#include <stdio.h>

int main(void)
{
    int number;
    int reversed = 0;
        printf("Veuillez fournir le numéro à inverser : \n");
        scanf("%i", &number);
    
    while (number != 0)
    {
        reversed = reversed * 10;
        reversed = reversed + number % 10;
        number /= 10;
    }

    printf("Le nombre inversé est : %i\n", reversed);
}


