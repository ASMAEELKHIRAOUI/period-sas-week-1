#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s=0,n,max=0;
    for(i=0;i<10;i++){
        printf("T[ %d ] : ",i);
        scanf("%d",&n);
        if(n%10 == 0)
           s+=n;
        if(n>max)
            max = n;
    }
    printf("la somme de ces nombres est : %d \n",s);
    printf("le maximum de ces nombres est : %d ",max);

    return 0;
}
