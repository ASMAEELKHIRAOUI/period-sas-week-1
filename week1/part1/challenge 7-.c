#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Saisir la valeur de a : ");
    scanf("%d",&a);
    printf("Saisir la valeur de b : ");
    scanf("%d",&b);
    printf("%d + %d = %d \n",a,b,a+b);
    printf("%d x %d = %d \n",a,b,a*b);
    printf("%d - %d = %d \n",a,b,a-b);
    printf("%d / %d = %d \n",a,b,a/b);
    printf("%d r %d = %d",a,b,a%b);
    return 0;
}
