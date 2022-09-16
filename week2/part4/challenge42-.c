#include <stdio.h>
#include <stdlib.h>

int inverse(int a,int b){
     int c=a;
     a=b;
     b=c;
     printf("l inverse de a et b est : %d %d ",a,b);
}
int main()
{
    int a,b;
    printf("saisir la valeur de a : ");
    scanf("%d",&a);
    printf("saisir la valeur de b : ");
    scanf("%d",&b);
    inverse(a,b);

    return 0;
}
