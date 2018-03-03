#include <stdio.h>
#include <stdlib.h>
int main()
{
    int turtlePos[2];
    int turtleRot=0;
    int x =0;
    int y =1;
    int board[20][20];
    int running = 1;
    int i;
    int j;
    int caneta =0;
    int comando;
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            board[i][j]=0;
        }
    }
    turtlePos[x]=0;
    turtlePos[y]=0;
    while(running){
    //drawing the board.
    printf("Posicao da tartaruga (%d,%d)\n",turtlePos[y],turtlePos[x]);
    printf("Caneta para %s\n",(caneta == 1) ? "baixo" : "cima");
    printf("Olhando para %s\n",(turtleRot== 0) ? "norte" : (turtleRot== 1) ? "leste":(turtleRot== 2) ? "sul":"oeste");
    //exibe a matriz;
    for(i=19;i>-1;i--){
        for(j=0;j<20;j++)
            {
            if(turtlePos[x]==j && turtlePos[y]==i)
            {
                printf("T");
            }
                else{
                printf("%d",board[i][j]);
            }
        }
        printf("\n");
    }
        printf("Digite um comando:\n");
        printf("1 caneta para cima,2 caneta para baixo,3 vira a direita,4 vira a esquerda,5 avanca,6 exibe matriz,9 termina o programa\n\n\n");
        scanf("%d",&comando);
        switch(comando) {

        case 1  :
          caneta=0;
          break;

        case 2  :
          caneta=1;
          break;
        case 3  :
          ++turtleRot;
          turtleRot%=4;
          break;
        case 4  :
          --turtleRot;
          turtleRot%=4;
          break;
        case 5  :
          switch (turtleRot){
            case 0:
            if(turtlePos[y]+1<20){
                if(caneta){
                    board[turtlePos[y]][turtlePos[x]]=1;
                }
                turtlePos[y]+=1;
            }
            break;
            case 1:
            if(turtlePos[x]+1<20){
                if(caneta){
                    board[turtlePos[y]][turtlePos[x]]=1;
                }
                turtlePos[x]+=1;
            }
            break;
            case 2:
            if(turtlePos[y]-1>-1){
                if(caneta){
                    board[turtlePos[y]][turtlePos[x]]=1;
                }
                turtlePos[y]-=1;
            }
            break;
            case 3:
            if(turtlePos[x]-1>-1){
                if(caneta){
                    board[turtlePos[y]][turtlePos[x]]=1;
                }
                turtlePos[x]-=1;
            }
            break;
          }
          break;
        case 6  :
          for(i=19;i>-1;i--){
            for(j=0;j<20;j++)
                {
                if(turtlePos[x]==i && turtlePos[y]==j)
                {
                    printf("T");
                }
                    else{
                    printf("%d",board[i][j]);
                }
            }
            printf("\n");
          }
          break;
        case 9  :
          running=0;
          break;
       default :
       printf("invalid command");
    }
    }
}
