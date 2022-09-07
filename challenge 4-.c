#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, m ,Mi;
    printf("Saisir la distance en mile : ");
    scanf("%f",&Mi);
    km=Mi*1.609;
    m=km*1000;
    printf("la distance en metre est: %f ",m);
    return 0;
}
