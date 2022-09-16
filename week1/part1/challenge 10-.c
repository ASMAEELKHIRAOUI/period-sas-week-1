#include <stdio.h>
#include <stdlib.h>

int main()
{
    float R, C;
    printf("entrer le rayon du cercle : ");
    scanf("%f",&R);
    C=2*3.14*R;
    printf("la circonférence du cercle est %.2f ",C);
    return 0;
}
