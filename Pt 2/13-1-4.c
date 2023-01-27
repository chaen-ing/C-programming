// ptr 2개 선언해서 배열 순서 거꾸로
#include <stdio.h>

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[5];

    for(int i = 0; i < 3; i++){
        int swap = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = swap;
        
        ptr1++;
        ptr2--;
    }
    for(int j = 0; j < 6; j++){
        printf("%d ",arr[j]);
    }
}