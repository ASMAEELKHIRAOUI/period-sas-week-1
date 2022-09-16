#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1, m1, s1, h2, m2, s2, t1, t2;
    printf("entrer le premier  instant : ");
    scanf("%d %d %d",&h1,&m1,&s1);
    printf("entrer le deuxieme  temps : ");
    scanf("%d %d %d",&h2,&m2,&s2);
    t1=h1*3600+m1*60+s1;
    t2=h2*3600+m2*60+s2;
    if(t1==t2)
        printf("Il s'agit du même instant.");
    else if(t1<t2)
        printf("Le premier instant vient avant le deuxième. ");
    else
        printf("Le deuxième instant vient avant le premier. ");
    return 0;
}
