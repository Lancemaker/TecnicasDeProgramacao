#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorDoProduto;
    printf("digite o valor do produto");
    scanf("%f",&valorDoProduto);
    if(valorDoProduto<20){
        valorDoProduto*=1.45;
    }
    else{
        valorDoProduto*=1.3;
    }
    printf("valor da venda %0.2f",valorDoProduto);
}
