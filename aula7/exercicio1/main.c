#include <stdio.h>
#include <stdlib.h>

void quadrado(int *i);
void pegaEPrintaQuadrado();
int main()
{
    pegaEPrintaQuadrado();
}

void quadrado(int *i){
    (*i)*=(*i);
}
void pegaEPrintaQuadrado(){
    int a;
    printf("digite um numero para elevar a seu quadrado: ");
    scanf("%d",&a);
    quadrado(&a);

    printf("%d",a);
}
