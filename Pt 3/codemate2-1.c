// codemate 2-1 2차원 배열 문제
// 숫자 16개를 입력받아 크기가 4*4인 2차원 배열을 구성하고, 행과 열을 바꿔서 출력해보세요.

#include <stdio.h>
int main(){
    int arr[4][4];
    printf("숫자 16개를 입력하시오 : ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    printf("[변경 전]\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("[변경 후]\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
