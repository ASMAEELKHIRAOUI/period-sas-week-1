#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, p, i, x;
    printf("entrer le nombre : ");
    scanf("%d",&n);
    printf("entrer sa puissance : ");
    scanf("%d",&p);
    i=0;
    while(i<p){
        x=n*n;
        i++;
    }
    printf("%d ^ %d = %d ",n,p,x);
    return 0;
}
