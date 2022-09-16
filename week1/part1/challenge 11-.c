#include <stdio.h>
#include <stdlib.h>

int main()
{
    float la, lo, c;
    printf("entrer la longueur du rectangle : ");
    scanf("%f",&lo);
    printf("entrer la largeur du rectangle : ");
    scanf("%f",&la);
    c=(lo+la)*2;
    printf("la circonférence d'un rectangle est %.2f ",c);
    return 0;
}
