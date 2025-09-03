#include <stdio.h>
#include <math.h>

int main() {
int a, i;
printf("Entrez ton nomber:  \n");
scanf("%d", &a);
printf("Table de miltiplication de %d :  \n", a);
for(i = 0; i <= 10 ; i++){
printf("%d * %d = %d \n", a, i, a * i);
}
return 0;
}