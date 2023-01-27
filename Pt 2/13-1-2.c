// ptr에 저장된값 변경x. ptr을 대상으로 덧셈연산하여 반환되는 주소 값을 통해 배열요소에 접근하여 2씩 증가.
#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    for(int i = 0; i < 5; i++){
        *(ptr + i) += 2;
        printf("%d ",*(ptr+i));  
    }
    printf("\n");
}