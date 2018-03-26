#include <stdio.h>
#include <stdlib.h>

float valorFinal(float pCheio, float desc)
{
      return pCheio *(1-desc/100);
}


int main()
{
    printf("%.2f",valorFinal(100,10));
    return 0;
}
