#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n1;
    int n2;
    float resultado;
    printf("Digite o primeiro numero\n");
    scanf("%d",&n1);
    printf("Digite o segundo  numero\n");
    scanf("%d",&n2);
    printf("Seus numeros sao : %d %d \n",n1,n2);

    resultado =(float) n1+n2;
    printf("soma : %.2f \n",resultado);

    resultado = (float) n1-n2;
    printf("subtracao : %.2f \n",resultado);
    //se n2 for zero vai dar ruim.

    resultado = (float) n1/n2;
    printf("divisao : %.2f \n",resultado);

    resultado = (float) n1*n2;
    printf("multiplicacao : %.2f \n",resultado);

    resultado = sqrt((float)n1);
    printf("raiz de N1: %.2f \n",resultado);
    resultado = sqrt((float)n2);
    printf("raiz de N2: %.2f \n",resultado);

    resultado = pow((float)n1,3);
    printf("N1 ao Cubo %.2f \n",resultado);
    resultado = pow((float)n2,3);
    printf("N1 ao Cubo %.2f \n",resultado);

    resultado = (float) (n1%2);
    printf("resto de N1/2 %.2f \n",resultado);
    resultado = (float) (n2%2);
    printf("resto de N2/2 %.2f \n",resultado);
    return 0;
}
