#include <stdio.h>

void Swap3(int *ptr1, int *ptr2, int *ptr3){
    int swap = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;
    *ptr3 = swap;
}

int main(){
    int num1 = 1, num2 = 2, num3 = 3;
    Swap3(&num1,&num2,&num3);
    printf("num1 = %d, num2 = %d, num3 = %d\n",num1,num2,num3);

}

