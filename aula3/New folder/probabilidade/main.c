#include <stdio.h>
#include <stdlib.h>
//calcula a chance do resultado de 3 dados dar uma soma x, onde x varia de 3 a 18.
int main()
{
   int x;
   //variaveis dos for loops.
   int i;
   int j;
   int k;
   int acumulador=0;
   printf("digite o valor da soma dos valores do dados para saber a probabilidade(3-18):\n");
   scanf("%d",&x);
   for (i=1; i<7;i++){
       for (j=1; j<7;j++){
           for (k=1; k<7;k++){
               if(i+j+k==x){
                printf("%d+%d+%d=%d\n",i,k,j,i+j+k);
                ++acumulador;
               }
               }
       }
   }
   printf("numero de somas iguais a %d : %d\n",x,acumulador);
   printf("probabilidade : %.2f%%",(acumulador/216.0f)*100.0f);

}
