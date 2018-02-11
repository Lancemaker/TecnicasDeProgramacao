#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorHoraAula;
    int numeroDeAulas;
    float descontoInss;
    float salarioLiquido;
    printf("digite o valor da hora aula :\n");
    scanf("%f",&valorHoraAula);
    printf("quantas aulas foram dadas este mes?\n");
    scanf("%d",&numeroDeAulas);
    printf("Digite o percentual de desconto do inss:\n");
    scanf("%f",&descontoInss);
    salarioLiquido = (valorHoraAula*numeroDeAulas)*(1-descontoInss/100);
    printf("Valor da hora aula: %.2f\nAulas no mes : %d\nPercentual de desconto no INSS:%.2f\nSalario liquido %.2f",valorHoraAula,numeroDeAulas,descontoInss/100,salarioLiquido);
    return 0;
}
