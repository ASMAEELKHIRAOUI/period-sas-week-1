#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[10];
    int i;
    int n;
    printf("le tableau de multiplication du nombre : ");
    scanf("%d",&n);

    for(i=1 ; i<=10 ; i++)
        printf("%d x %d = %d \n",n,i,n*i);

    return 0;
}
