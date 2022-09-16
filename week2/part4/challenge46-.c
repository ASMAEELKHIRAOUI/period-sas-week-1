#include <stdio.h>
#include <stdlib.h>
int i,j;
void inverse(int t[]){
      int tmp,n;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(t[j]>t[j+1]){
                tmp=t[j];
                t[j]=t[j+1];
                t[j+1]=tmp;
            }
        }
    }
}

int main()
{
    int t[10],i,n;
    printf("entrer le nombre de therme : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("T[%d] = ",i);
        scanf("%d",&t[i]);
    }


    printf("apres le tri");
       inverse(t[i]);
        for(i=0;i<n;i++){
        printf(" %d \t ",t[i]);
        }
    return 0;
}
