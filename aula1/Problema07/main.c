#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1kw = 1/500 do salario minimo.
    float salarioMinimo;
    float QntDeKW;
    printf("Valor Do Salario Minimo\n");
    scanf("%f",&salarioMinimo);

    printf("Quantidade de KWs consumidos\n");
    scanf("%f",&QntDeKW);

    printf("O valor de cada quilowatt e: %.2f\nValor a ser pago:%.2f\nValor a ser pago com desconto de 15 porcento : %.2f",salarioMinimo/500,QntDeKW*(salarioMinimo/500),QntDeKW*(salarioMinimo/500)*(0.85));
    return 0;
}
