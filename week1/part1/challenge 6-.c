#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F, C;
    printf("Saisir la temperature en F: ");
    scanf("%f",&F);
    C=(F-32)/1.8;
    printf("la temperature en C est: %.2f ",C);
    return 0;
}
