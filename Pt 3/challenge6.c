#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((int)time(NULL));
    int randNum[3],myNum[3];
    int j,m,n,try = 1;
    for(int i = 0; i < 3; i++){
        randNum[i] = rand()%10;
    }
    printf("Start Game!\n");
    while(1){
        int strike = 0, ball = 0;
        printf("3개의 숫자 선택 : ");
        for(int i = 0; i < 3; i++){
            scanf("%d",&myNum[i]);
        }
        printf("%d 번째 도전 결과 : ",try);
        for(int i = 0; i < 3; i++){
            if(randNum[i] == myNum[i])
                strike++;
        }
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(randNum[i] == randNum[j])
                ball++;
            }
        }
        printf("%dstrike, %dball!!\n",strike,ball-strike);
        if(strike == 3)
            break;
        try++;

        
    }
    
}