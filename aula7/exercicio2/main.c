#include <stdio.h>
#include <stdlib.h>
void converte(int hora,int minuto,int *minutosTotal);
void main()
{
    int horas,minutos,minutosTotal;
    printf("digite as horas e os minutos :");
    scanf("%d %d",&horas,&minutos);
    converte(horas,minutos,&minutosTotal);
    printf("%d minutos",minutosTotal);
}

void converte(int hora,int minuto,int *minutosTotal){
    *minutosTotal=(hora*60)+minuto;
}
