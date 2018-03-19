#include <stdio.h>
#include <stdlib.h>

void main()
{
    char primeira[100];
    char segunda[100];
    int i=0;
    int j=0;


    printf("digite a primeira string:\n");
    scanf("%s",primeira);
    fflush(stdin);
    printf("digite a segunda string:\n");
    scanf("%s",segunda);


    for( i=0; i<100;i++){
        if(primeira[i]=='\0'){
            for(j=0;j<100;j++){
                if(segunda[j]!='\0'){
                   primeira[i]=segunda[j];
                   i++;
                }
                else{
                    primeira[i]='\0';
                    break;
                }
            }
        }

    }
printf("%s",primeira);
}
