#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c , x1, x2, x, d;
    printf("entrer la valeur de a : ");
    scanf("%f",&a);
    printf("entrer la valeur de b : ");
    scanf("%f",&b);
    printf("entrer la valeur de c : ");
    scanf("%f",&c);
    d=pow(b,2)-(4*a*c);
    if(d==0){
        x=(-b/(2*a));
        printf("il existe une seul solution %.2f",x);
    }
    else if(d>0){
        x1=(-b-sqrt(d))/(2*a);
        x2=(-b+sqrt(d))/(2*a);
        printf("cette equation admet deux solutions %.2f et %.2f",x1,x2);
    }
    else
        printf("cette equation n'admet aucune solution!");
    return 0;
}
