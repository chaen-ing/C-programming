// codemate 3-2 이중포인터
// 이중포인터와 크기가 5인 배열을 선언하고, 함수를 사용해서 최대값 출력.

#include <stdio.h>

void maxNum(int *arr,int **ptr){
    int *maxNum = arr;

    for(int i = 0; i < 5; i++){
        if(arr[i] > *maxNum)
            maxNum = &arr[i];
    }
    
    *ptr = maxNum;
}

int main(){
    int arr[5];
    int *max;

    for(int i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }

    maxNum(arr,&max);

    printf("최대값 : %d\n",*max);

}


