#include <stdio.h>
int main(){
    int twoDArr[3][9];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 9; j++){
            twoDArr[i][j] = (i + 2) * (j+1);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 9; j++){
            printf("%d ",twoDArr[i][j]);
        }
        printf("\n");
    }
}