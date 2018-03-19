#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[15];
    char c;
    int i = 0;
    printf("digite uma string:");
    scanf("%s",str);
    fflush(stdin);
    printf("digite um char:");
    scanf("%c",&c);
    for(int i=0;i<15;i++){
        if(str[i]!='\0'&& str[i]==c){
            printf("caractere %c encontrado na posicao %d",c,i);
            break;
        }
        if(str[i]=='\0'){
            printf("caractere %c nao encontrado na string %s",c,str);
            break;
        }
    }

}
