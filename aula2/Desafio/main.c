#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;
    printf("entre com a quantidade de bits:\n");
    scanf("%d",&quantidade);
    if(quantidade>=50){
        printf("Sao %d notas de 50\n",quantidade/50);
        quantidade%=50;
    }
    if(quantidade>=10){
        printf("Sao %d notas de 10\n",quantidade/10);
        quantidade%=10;
    }
    if(quantidade>=5){
        printf("Sao %d notas de 10\n",quantidade/5);
        quantidade%=5;
    }
    if(quantidade>=1){
        printf("Sao %d notas de 1\n",quantidade);
    }
}
