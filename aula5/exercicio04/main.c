#include <stdio.h>
#include <stdlib.h>

float calcula(int n1,int n2,char n3){
    switch(n3){
        case '+':
            return("%.2f",n1+n2);
            break;

        case '-':
            return("%.2f",n1-n2);
            break;

        case '*':
            return("%.2f",n1*n2);
            break;

        case '/':
            return("%.2f",(float)n1/(float)n2);
            break;

        default:
            printf("operador invalido");
            break;
        }
    return 0;
}

int main()
{
    char o;
    int n1;
    int n2;
    printf("digite uma operacao matematica(n1 (+,-,*,/) n2) :\n");
    scanf("%i %c %i",&n1,&o,&n2);
    printf("%.2f",calcula(n1,n2,o));
    return 0;
}
