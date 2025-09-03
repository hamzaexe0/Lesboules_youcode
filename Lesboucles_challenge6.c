#include <stdio.h>

int main() {
    int a,i;
    int b = 1;
    printf("Enter your Number: ");
    scanf("%d", &a);
    for (i = 1 ; i <= a; ++i) {
        b = 2 * i ;
        printf("%d      ", b );
    }

}
