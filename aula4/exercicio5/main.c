#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[100];
    char palavra[30];
    char contador=0;
    int i = 0;
    int j = 0;
    printf("digite uma frase:\n");
    gets(frase);
    fflush(stdin);
    printf("digite uma palavra:\n");
    gets(palavra);
    int fraseSize =  strlen(frase);
    printf("fraseSize =%d\n",fraseSize);
    int palavraSize =  strlen(palavra);
    printf("palavraSize =%d\n",palavraSize);
    fflush(stdin);
    for(i = 0;i<fraseSize;i++){
        if(frase[i]==palavra[j]){
            printf("match frase %c palavra %c\n",frase[i],palavra[j]);
            ++j;
            contador++;
        }
        else{
            i-=j;
            j=0;
        }
    }
    printf("%s apareceu %d vezes",palavra,contador/palavraSize);
}
