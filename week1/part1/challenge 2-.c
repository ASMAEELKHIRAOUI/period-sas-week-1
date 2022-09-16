#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;
    printf("Sasir la tempertature en F: ");
    scanf("%f",&F);
    C=(F-32)/1.8;
    printf("La tempertature en C est: %f ",C);
    return 0;
}
