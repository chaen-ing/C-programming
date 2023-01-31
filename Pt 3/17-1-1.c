#include <stdio.h>
void MaxAndMin(int *arr, int **max, int **min);

int main(){
    int arr[5] = {1,2,3,4,5};
    int *maxPtr = arr;
    int *minPtr = arr;
    MaxAndMin(arr,&maxPtr,&minPtr);
    printf("max : %d, min : %d\n",*maxPtr,*minPtr);
}

void MaxAndMin(int *arr, int **max, int **min){
    for(int i = 0; i < 5; i++){
        if(**max < arr[i])
            *max = &arr[i];
    }

    for(int i = 0; i < 5; i++){
        if(**min > arr[i])
            *min = &arr[i];
    }
}


