// ptr에 저장된값 증가시키는 연산으로 배열요소의 값2씩 증가.
#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[0];
    for(int i = 0; i < 5; i++){
        *ptr += 2;
        printf("%d ",*ptr);
        ptr++;
    } 
    printf("\n");

    return 0;
}