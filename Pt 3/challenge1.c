#include <stdio.h>
int main(){
    int twoDArr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int twoDArr2[4][4];
    int twoDArr3[4][4];
    int twoDArr4[4][4];

    printf("- 기존배열 -\n");
    for(int i = 0; i < 4; i++){
        for(int j =0; j < 4; j++){
            printf("%d ",twoDArr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 4; i++){
        for(int j =0; j < 4; j++){
            twoDArr2[j][3-i] = twoDArr[i][j];
        }
    }

    printf("\n- 첫번째 90도 회전 - \n");
    for(int i = 0; i < 4; i++){
        for(int j =0; j < 4; j++){
            printf("%d ",twoDArr2[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 4; i++){
        for(int j =0; j < 4; j++){
            twoDArr3[3-i][3-j] = twoDArr[i][j];
        }
    }

    printf("\n- 두번째 90도 회전 - \n");
    for(int i = 0; i < 4; i++){
        for(int j =0; j < 4; j++){
            printf("%d ",twoDArr3[i][j]);
        }
        printf("\n");
    }
//30 20 10 00 >> 31 21 11 01`
    for(int i = 0; i < 4; i++){
        for(int j =0; j < 4; j++){
            twoDArr4[3-j][i] = twoDArr[i][j];
        }
    }

    printf("\n- 세번째 90도 회전 - \n");
    for(int i = 0; i < 4; i++){
        for(int j =0; j < 4; j++){
            printf("%d ",twoDArr4[i][j]);
        }
        printf("\n");
    }
}