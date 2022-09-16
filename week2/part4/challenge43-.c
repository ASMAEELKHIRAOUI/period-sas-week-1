#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isPremier(int n);

bool isPremier(int n){
    int i;
    if(n<=2) return true;
    else{
        for(i=2;i<n;i++){
            if(n%i==0)
                return false;
            else
                return true;
        }
    }
}
int main()
{
    int n;
    printf("entrer un nombre : ");
    scanf("%d",&n);
    if(isPremier(n))
        printf("ce nombre est premier ! ");
    else
        printf("ce nombre n est pas premier ! ");
    return 0;
}
