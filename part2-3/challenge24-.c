#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("entrer la valeur de n : ");
    scanf("%d",&n);
    printf("entrer la valeur de m : ");
    scanf("%d",&m);
    printf("la somme de ces nombres sera %d ",m+n);
    if(n==m)
        printf("le triple de la somme de ces nombres sera %d ",3*(m+n));
    return 0;
}
