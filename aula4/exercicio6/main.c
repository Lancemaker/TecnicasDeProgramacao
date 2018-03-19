#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char s[200];
    char temp[200];
    int i=0;
    int aCount=0;
    int lastSpace=0;
    printf("digite uma frase:\n");
    gets(s);
    int j=0;
    int k=0;
    printf("%d\n",strlen(s));
    while(i<strlen(s)+1){
        if((s[i]!=' ') && (s[i]!='\0')){
            if(s[i]=='a'||s[i]=='A'){
                aCount++;
            }
        }
        else{
            printf("%d\n",aCount);
            if(aCount>1){
             for(j=lastSpace;j<i;j++){
                temp[k]=s[j];
                k++;
             }
            }
            aCount=0;
            lastSpace=i;
        }
        i++;
    }
    temp[k+1]='\0';
    printf("%s",temp);
}
