//성적관리 프로그램
#include <stdio.h>
int main(){
    int arrScore[5][5] = {
        {5,4,6,5},
        {3,6,9,3},
        {4,8,2,7},
        {3,8,9,7}
    };
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            arrScore[i][4] += arrScore[i][j];
        } 
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            arrScore[4][i] += arrScore[j][i];
        } 
    }

    for(int i = 0; i < 4; i++){
            arrScore[4][4] += arrScore[4][i];
    } 

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ",arrScore[i][j]);
        }
        printf("\n");
    }
    
}