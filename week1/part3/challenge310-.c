#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[10];
    int n,i,s=0;
    for(i=0;i<10;i++){
        printf("t[%d] = ",i);
        scanf("%d",&t[i]);
        if(t[i]>0)
            s+=t[i];
    }
    printf("la somme des nombres est : %d ",s);
    return 0;
}
