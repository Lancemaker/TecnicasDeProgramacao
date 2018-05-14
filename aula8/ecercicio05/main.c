#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
    int i;
    int menor=0;
    int maior=0;
    int media=0;
    vetor=(int *) malloc(20*sizeof(int));

    for(i=0;i<20;i++){
        vetor[i]=i;
    }

    vetor=(int *) realloc(vetor, 23*sizeof(int));

    for(i=0;i<20;i++){
        media+=vetor[i];
        if(menor>=vetor[i]){
            menor = vetor[i];
        }
        if(maior<=vetor[i]){
            maior= vetor[i];
        }
    }
    vetor[22]=media/20;
    vetor[21]=menor;
    vetor[20]=maior;

    for(i=0;i<23;i++){
        printf("%d ",vetor[i]);
    }
}
