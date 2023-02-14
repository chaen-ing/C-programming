//야구게임. 같은 숫자가 두개나올시에 2ball이 되는 오류 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((int)time(NULL));
    int randNum[3];
    int try = 1;
    for(int i = 0; i < 3; i++){
        randNum[i] = rand()%10; //randNum 배열에 랜덤 숫자 0-9 3개 
    }
    for(int i = 0; i < 3; i++){
        printf("%d ",randNum[i]); //randNum check
    }

    printf("Start Game!\n");

    while(1){
        int myNum[3];
        int strike = 0, ball = 0;
        printf("3개의 숫자 선택 : ");

        for(int i = 0; i < 3; i++){
            scanf("%d",&myNum[i]);
        } // 숫자 세개 mynum배열에 저장

        printf("%d 번째 도전 결과 : ",try);
        for(int i = 0; i < 3; i++){
            if(randNum[i] == myNum[i])
                strike++;
        } //위치까지 같으면 strike 

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(randNum[i] == myNum[j])
                ball++;
            }
        } //ball 하나하나씩 확인하면서 같은게 있으면 ball
        printf("%dstrike, %dball!!\n",strike,ball-strike); //ball에서 strike 빼기

        if(strike == 3)
            break;

        try++;
  
    }
    printf("\n\nGame Over!\n");
    
}