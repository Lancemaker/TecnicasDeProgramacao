#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;
    printf("digite seu peso em KG \n");
    scanf("%f",&peso);
    peso = peso*1000;
    printf("seu peso é %.0f gramas\n",peso);
    printf("seu peso se voce engordar 12 por cento e :  %.0f gramas.",((float)peso * 1.12));
    return 0;
}
