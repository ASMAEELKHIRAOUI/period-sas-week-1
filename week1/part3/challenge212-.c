#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, x1, y1, x2, y2 ,x ,y;
    printf("entrer les coordonnees du premier point : ");
    scanf("%f,%f",&x1,&y1);
    printf("entrer les coordonnees du deuxieme point : ");
    scanf("%f,%f",&x2,&y2);
    printf("entrer les coordonnees du point a determiner: ");
    scanf("%f,%f",&x,&y);
    a=(y2-y1)/(x2-x1);
    b=y1-a*x1;
    if(y == a * x + b)
        printf("Ce point appartient a la droite");
    else
        printf("Ce point n appartient pas a la droite");
    return 0;
}
