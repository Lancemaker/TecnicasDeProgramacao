#include <stdio.h>
#include <stdlib.h>

int main()
{
   float salario;
   float prestacao;
   printf("Digite o salario");
   scanf("%f",&salario);
   printf("digite o valor da prestação");
   scanf("%f",&prestacao);
   //checa se a prestacao e maior que 30% do salario;
   if(prestacao>salario*0.3f){
        printf("emprestimo negado.");
   }else{
        printf("emprestimo concedido.");
   }
}
