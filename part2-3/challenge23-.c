#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("entrer la valeur de n : ");
    scanf("%d",&n);
    printf("entrer la valeur de m : ");
    scanf("%d",&m);
    if(n==m || n<m)
        printf("le nouveau nombre sera %d %d",m,n);
    else
        printf("le nouveau nombre sera %d %d",n,m);
    return 0;
}
