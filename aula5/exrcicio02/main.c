#include <stdio.h>
#include <stdlib.h>

int fat(int i){
    int saida=i;
    for(i-=1;i>1;i--){
    saida*=i;
    }
    return saida;
}

int main()
{
    int n;
    printf("digite o numero para fatorializar:\n");
    scanf("%d",&n);
    printf("%d",fat(n));
    return 0;
}
