#include <stdio.h>
#include <stdlib.h>


int main()
{
    int horas1,minutos1;
    int horas2,minutos2;
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

    printf("A partida durou %d horas e %d minutos", abs(24*(abs(horas2-horas1)>=22)-abs(horas2-horas1)),abs(minutos2-minutos1));
    return 0;
}
