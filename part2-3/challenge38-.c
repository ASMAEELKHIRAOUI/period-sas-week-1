#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float a, b, c,fa,fb,fc;
    a=-15;
    b=-10;
    while(b-a>0.00001){
        fa=pow(a,3)+12*(pow(a,2))+1;
        fb=pow(b,3)+12*(pow(b,2))+1;
        c=(a+b)/2;
        fc=pow(c,3)+12*(pow(c,2))+1;

            if(fa*fc<0)
                b=c;
            else if(fb*fc<0)
                a=c;
    }
    fa=pow(a,3)+12*(pow(a,2))+1;
    printf("le resultat est le point de coordonnees: ( %.5f ; 0 ) ",a);
    return 0;
}
