#include <stdio.h>
#include <stdlib.h>


/*
Escreva um programa em C que leia um caractere e
imprima o seu conte�do e endere�o, usando um ponteiro para caractere.
*/

int main()
{
    char c;
    char *p = &c;
    printf("Digite uma letra");
    scanf("%c",&c);

    printf("Conteudo de c e %c\n",*p);
    printf("Endere�o de c e %d",p);

    return 0;
}
