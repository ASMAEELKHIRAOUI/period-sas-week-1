#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int day = rand()%7 ;
    int i;
    for(i=0;i<10;i++)
    printf("%d \n",rand()%7);
    switch(day)
    {
        case 1: printf("LUNDI");
        break;
        case 2: printf("MARDI");
        break;
        case 3: printf("MERCREDI");
        break;
        case 4: printf("JEUDI");
        break;
        case 5: printf("VENDREDI");
        break;
        case 6: printf("SAMEDI");
        break;
        default : printf("DIMANCHE");
    }
    return 0;
}
