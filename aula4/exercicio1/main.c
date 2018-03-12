#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[15];
    int i =0;
    int acumulador=0;
    printf("digite:");
    scanf("%s",str);
    for(i = 0; i<15 ;i++){
        if(str[i]!='\0'){
            printf("%c",str[i]);
            acumulador ++;
        }
        else{
            break;
        }
    }
    printf("a palavra tem %d letras",acumulador);
}
