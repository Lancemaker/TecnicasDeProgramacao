#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    char temp[100];
    int i=0;
    int j=0;
    int ultimoEspaco=0;
    int contaA=0;

    printf("digite uma frase\n");
    gets(s);

    for(i =0;i<strlen(s);i++){
        if(s[i]=='a'||s[i]=='A'){
        ++contaA;
        }
        if(s[i]==' '){
            if(contaA>=2){
            for(j = ultimoEspaco;j<i;j++){
            temp[j]=s[j];
            }
            contaA=0;
            ultimoEspaco = i+1;
            }
        }

    }
    s[i+1]='\0';
    printf("frase : %d\n",i);
    printf("frase : %s\n",temp);
}
