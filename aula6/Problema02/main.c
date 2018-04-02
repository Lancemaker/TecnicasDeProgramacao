#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;
    float *p = &numero;
    printf("digite um numero");
    scanf("%f",p);
    printf("%d %f\n",p,*p);
    p++;
    printf("%d %f",p,*p);
}
