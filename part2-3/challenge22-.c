#include <stdio.h>
#include <stdlib.h>

int main()
{
<<<<<<< HEAD
    int n;
    printf("entrer un nombre : ");
    scanf("%d",&n);
    if(n%2==0)
        printf("ce nombre est pair!");
    else
        printf("ce nombre est impair!");
=======
    float m;
    printf("Entrer votre moyenne : ");
    scanf("%f",&m);
    if(m<10)
        printf("Recale ! :( ");
    else if(m<12 && m>=10)
        printf("Passable ! -_- ");
    else if(m<14 && m>=12)
        printf("Assez bien ! ^_^ ");
    else if(m<16 && m>=14)
        printf("Bien ! :)");
    else if(m>=16)
        printf("Tres bien ! XD ");
>>>>>>> 26e7386 (challenge 2)
    return 0;
}
