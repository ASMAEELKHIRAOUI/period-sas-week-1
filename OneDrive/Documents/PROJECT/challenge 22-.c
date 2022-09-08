#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("entrer un nombre : ");
    scanf("%d",&n);
    if(n%2==0)
        printf("ce nombre est pair!");
    else
        printf("ce nombre est impair!");
    return 0;
}
