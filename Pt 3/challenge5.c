#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int win = 0, draw = 0;
    while(1){
        int n,program;
        printf("바위는 1, 가위는 2, 보는 3 : ");
        scanf("%d",&n);
        srand((int)time(NULL));
        program = rand()%3+1;
        if(n == 1)
            printf("당신은 바위 선택, ");
        else if(n == 2)
            printf("당신은 가위 선택, ");
        else
            printf("당신은 보 선택, ");
        
        if(program == 1)
            printf("컴퓨터는 바위 선택, ");
        else if(program == 2)
            printf("컴퓨터는 가위 선택, ");
        else
            printf("컴퓨터는 보 선택, ");

        if(n == program){
            printf("비겼습니다!\n");
            draw++;
        }
        else if((n == 1 && program == 3) || (n == 2 && program == 1) || (n == 3 && program ==2)){
            printf("당신이 졌습니다!\n");
            break;
        }
        else{
            printf("당신이 이겼습니다!\n");
            win++;
        }
    }
    printf("\n게임의 결과 : %d승, %d무\n",win,draw);
}