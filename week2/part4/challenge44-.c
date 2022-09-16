#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float divededby(int b,int a){
    int c;
    c=a/b;
    return c;
}

bool isPremier(int c);

bool isPremier(int c){
    int i;
    if(c<=2) return true;
    else{
        for(i=2;i<c;i++){
            if(c%i==0)
                return false;
            else
                return true;
        }
    }
}
int main()
{
    float a, b, c;
    printf("entrer la valeur de a : ");
    scanf("%f",&a);
    printf("entrer la valeur de b : ");
    scanf("%f",&b);
    printf("le quotient de la division de a par b est : %.2f  \n",a/b);
    if(isPremier(a/b))
        printf("ce nombre est premier ! ");
    else
        printf("ce nombre n est pas premier ! ");
    return 0;
}
