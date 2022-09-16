#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("entrer un nombre:");
    scanf("%d",&a);
    printf("la valeur octale de ce nombre est %o \n",a);
    printf("la valeur hexadecimale de ce nombre est %X",a);
    return 0;
}
