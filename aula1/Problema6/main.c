#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Chocolates;
    int AlunosQueFizeramTudo;
    printf("Digite o numero de Chocolates\n");
    scanf("%d",&Chocolates);
    printf("Digite o numero de Alunos Que fizeram todos os exercicios\n");
    scanf("%d",&AlunosQueFizeramTudo);
    printf("cada aluno recebe %d, sobram %d chocolates",Chocolates/AlunosQueFizeramTudo,Chocolates%AlunosQueFizeramTudo);
    return 0;
}
