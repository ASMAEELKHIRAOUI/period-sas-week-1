#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F, C;
    printf("Saisir la temperature en F: ");
    scanf("%f",&F);
    C=(F-32)/1.8;
    printf("la temperature en C est: %.2f \n",C);
    if(C<=0)
        printf("il fait tres froid!");
    else if(C>0 && C<=30){
        printf("il fait froid!");
    }
    else if(C>30 && C<=38){
        printf("il fait chaud!");
    }
    else
        printf("il fait tres chaud!");
    return 0;
}
