#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, inv=0,r;
    printf("entrer un nombre : ");
    scanf("%d",&n);
    while(n%10 != 0){
        r=n%10;
        inv=inv*10+r;
        n=n/10;
    }
    printf("l inverse de ce nombre est : %d ",inv);
    return 0;
}
