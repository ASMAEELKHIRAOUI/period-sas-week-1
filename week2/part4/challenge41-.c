#include <stdio.h>
#include <stdlib.h>

int add(int a,int b){
    return a+b;
}
int main()
{
    int a,b;
    printf("entrer la valeur de a : ");
    scanf("%d",&a);
    printf("entrer la valeur de b : ");
    scanf("%d",&b);
    printf("la somme de ces deux nombres est : %d ",add(a,b));
    return 0;
}
