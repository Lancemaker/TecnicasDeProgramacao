#include <stdio.h>
#include <stdlib.h>

int checaPares(int n){
    int contador=0;
    int i=0;
    if(n==1){
        return 0;
    }
    else{
        for(i=1; i<n; i++){
            contador+=(i%2==0);
        }
        return contador;
    }

}

int main()
{
    int n;
    printf("digite um numero:\n");
    scanf("%d",&n);
    printf("%i\n",checaPares(n));
    return 0;
}
