#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
    int n1 =0;
    int n2 =1;
    int retorno = 0;
    int i=0;
    for(i=0; i<n; i++){
        if(n==0){
            retorno = n;
        }
        else{
            retorno = n1+n2;
            n1=n2;
            n2=retorno;
        }

    }
    return retorno;
}



int main()
{
    int n;
    printf("digite um indice para a sequencia de fibonacci\n");
    scanf("%d",&n);
    printf("%d",fibo(n));
}
