#include <stdio.h>
#include <stdlib.h>

int checaMenor(int *numeros, int tamanho){
    int i=0;
    int menor= *numeros;
    for(i=0;i<tamanho;i++){
        if(*numeros<menor){
            menor=*numeros;
        }
        numeros++;
    }
    return menor;
}

void main()
{
    int numeros[6]= {5,3,2,5,6,7};
    int tamanho =sizeof(numeros)/sizeof(numeros[0]);
    printf("o menor numero e %d",checaMenor(numeros,tamanho));
}
