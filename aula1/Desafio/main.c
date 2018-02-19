#include <stdio.h>
#include <stdlib.h>


int main()
{
    int horas1,minutos1;
    int horas2,minutos2;
    int difH;
    int difM;
    //recebendo hora e minutos do comeco
    printf("Digite a hora de inicio(sem os minutos formato 24 horas)\n");
    scanf("%d",&horas1);
    printf("Digite os minutos em que o jogo comecou\n");
    scanf("%d",&minutos1);
    //recebendo hora e minutos do fim
    printf("Digite a hora de termino da partida(sem os minutos formato 24 horas)\n");
    scanf("%d",&horas2);
    printf("Digite os minutos em que o jogo terminou\n");
    scanf("%d",&minutos2);
    difH=horas2-horas1;
    difM=minutos2-minutos1;
    printf("A partida durou %d horas e %d minutos", 24*(difH<0)+difH,(60*(difM<0))+difM);
    return 0;
}
