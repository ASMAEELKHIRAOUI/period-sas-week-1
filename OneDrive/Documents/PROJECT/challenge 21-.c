#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;
    printf("entrer la temperature en F : ");
    scanf("%f",&F);
    C=(F-32)/1.8;
    printf("la temperature en C est : %f \n",C);
    if(C<=0)
        printf("il fait tres froid!");
    else if(C>0 && C<=20)
        printf("il fait froid!");
    else if(C>20 && C<=30)
        printf("il fait beau!");
    else if(C>30 && C<=40)
        printf("il fait chaud!");
    else
        printf("il fait tres chaud!");
    return 0;
}
