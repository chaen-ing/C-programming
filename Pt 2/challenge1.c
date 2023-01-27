//정수 10개 입력받고, 각각 홀수/짝수만 출력하는 함수 만들어서 출력하기
#include <stdio.h>

void showOdd(int *ptr){
    printf("홀수 출력 : ");
    for(int i = 0; i < 10; i++){
        if(ptr[i] % 2 != 0)
            printf("%d ", ptr[i]);
    }
    printf("\n");
}

void showEven(int *ptr){
    printf("짝수 출력 : ");
    for(int i = 0; i < 10; i++){
        if(ptr[i] % 2 == 0)
            printf("%d ", ptr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10];
    printf("총 10개의 숫자 입력\n");
    for(int i = 0; i < 10; i++){
        printf("입력 : ");
        scanf("%d",&arr[i]);
    }
    showOdd(arr);
    showEven(arr);

}

