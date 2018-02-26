#include <stdio.h>
#include <stdlib.h>

int main()
{
    //farm rect;
    int farmXMin;
    int farmYMin;
    int farmXMax;
    int farmYMax;
    //meteors variables.
    int qntMeteoros;
    int metX;
    int metY;
    int colisoes=0;

    //geting the farm "vector2"s.
    printf("digite o valor minimo de x do terreno\n");
    scanf("%d",&farmXMin);
    printf("digite o valor minimo de y do terreno\n");
    scanf("%d",&farmYMin);
    printf("digite o valor maximo de x do terreno\n");
    scanf("%d",&farmXMax);
    printf("digite o valor maximo de y do terreno\n");
    scanf("%d",&farmYMax);
    //getting the number of meteors;
    printf("Digite o numero de meteoros a serem listados\n");
    scanf("%d",&qntMeteoros);

    //Checking for collisions
    for(int i=0;i<qntMeteoros;i++){
        printf("digite a coordenada X de impacto do meteoro\n");
        scanf("%d",&metX);
        printf("digite a coordenada Y de impacto do meteoro\n");
        scanf("%d",&metY);
        if(metX<=farmXMax&&metX>=farmXMin&&metY<=farmYMax&&metY>=farmYMin){
            colisoes++;
        }
    }
    printf("%d meteoros cairam na fazenda",colisoes);
}
