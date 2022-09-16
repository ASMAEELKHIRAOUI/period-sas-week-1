#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t[100],i,r;
    printf("Entrer le nombre de thermes de cette suite : ");
    scanf("%d",&n);
    t[0]=0;
    t[1]=1;
    for(i=2;i<=n;i++){
        t[i]=t[i-1]+t[i-2];
    }
    printf("U(%d) = %d \n",n,t[i]);
    return 0;
}
