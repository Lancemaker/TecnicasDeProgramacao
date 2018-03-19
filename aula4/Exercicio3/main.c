#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[100];
    int numeroDeCaracteres=0;
    char saida[100];
    int i = 0;
    printf("digite uma palavra\n");
    scanf("%s",palavra);
    fflush(stdin);
    printf("digite numero\n");
    scanf("%d",&numeroDeCaracteres);
    fflush(stdin);
    while(palavra[i]!='\0'&&i<numeroDeCaracteres){
        saida[i]=palavra[i];
        i++;
    }
    saida[i+1]='\0';
    printf("saida : %s",saida);

}
