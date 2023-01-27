//내림차순 버블정렬
#include <stdio.h>
#include <string.h>

void DesSort(int *ptr,int len){
    for(int i = len-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(ptr[j] < ptr[j+1]){
                int swap = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = swap;
            }
        }
    }

}
int main(){
    int arr[7];
    for(int i = 0; i < 7; i++){
        printf("입력 : ");
        scanf("%d",&arr[i]);
    }

    int len = sizeof(arr)/sizeof(int);
    DesSort(arr,len);

    for(int j = 0; j < 7; j++){
        printf("%d ",arr[j]);
    }
}