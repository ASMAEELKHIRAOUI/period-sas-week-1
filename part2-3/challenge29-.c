#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, y;
    printf("Entrer la date : ");
    scanf("%d/%d/%d",&d,&m,&y);
    switch(m)
    {
        case 1: printf("%d - janvier - %d",d,y);
        break;
        case 2: printf("%d - fevrier - %d",d,y);
        break;
        case 3: printf("%d - mars - %d",d,y);
        break;
        case 4: printf("%d - avril - %d",d,y);
        break;
        case 5: printf("%d - mai - %d",d,y);
        break;
        case 6: printf("%d - juin - %d",d,y);
        break;
        case 7: printf("%d - juillet - %d",d,y);
        break;
        case 8: printf("%d - aout - %d",d,y);
        break;
        case 9: printf("%d - septembre - %d",d,y);
        break;
        case 10: printf("%d - octobre - %d",d,y);
        break;
        case 11: printf("%d - novembre - %d",d,y);
        break;
        case 12: printf("%d - decembre - %d",d,y);
        break;
        default : printf("Ce mois n'existe pas ! ");
    }
    return 0;
}
