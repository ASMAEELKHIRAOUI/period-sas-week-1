#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Km, Mi, m;
    printf("Saisir la distance en metre : ");
    scanf("%f",&m);
    Km=m/1000;
    Mi=Km/1.609;
    printf("la distance en mile est: %.2f ",Mi);
    return 0;
}
