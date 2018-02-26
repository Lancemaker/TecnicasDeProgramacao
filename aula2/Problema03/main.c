#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("digite o salario");
    scanf("%f",&salario);
    if(salario>600){
        if(salario>600 && salario<=1200)
            {
                printf("o desconto e de: %0.2f",salario*0.20f);
            }
        if(salario>1200 && salario<=2000)
            {
                printf("o desconto e de: %0.2f",salario*0.25f);
            }
        if(salario>2000)
            {
                printf("o desconto e de: %0.2f",salario*0.30f);
            }
    }
    else {
        printf("isento de desconto de INSS.");
    }
}
