#include <stdio.h>

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    } // 5개 정수 입력받기

    int max = arr[0];
    int min = arr[0];
    int sum = 0;

    for(int i = 0; i < 5; i++){
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
        sum += arr[i];
    }

    printf("최댓값 : %d\n",max);
    printf("최솟값 : %d\n",min);
    printf("총 합 : %d\n",sum);

}