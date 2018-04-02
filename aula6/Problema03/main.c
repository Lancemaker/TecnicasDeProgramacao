#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("digite dois numeros:\n");
    scanf("%i %i",&a,&b);
    int *ap = &a;
    int *bp = &b;
    if(*ap==*bp){
        printf("sao iguais\n");
    }
    else{
        printf("sao diferentes, igualando ponteiros e conteudo\n");
        ap=bp;
    }
    if(*ap==*bp){
        printf("agora sao iguais:\n%i,%i %i,%i",ap,*ap,bp,*bp);
    }
}
