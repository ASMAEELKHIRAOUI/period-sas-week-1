#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2, y1, y2;
    float AB;
    printf("entrer les coordonnees de A :");
    scanf("%d %d",&x1,&y1);
    printf("entrer les coordonnees de B :");
    scanf("%d %d",&x2,&y2);
    AB = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("la distance entre A et B est: %f",AB);
    return 0;
}
