#include <stdio.h>
int main(){
    int num1 = 10;
    int num2 = 20;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    *ptr1 += 10;
    *ptr2 -= 10;

    ptr1 = &num2;
    ptr2 = &num1;

    printf("ptr1이 가리키는값 : %d, ptr2가 가리키는값 : %d\n",*ptr1,*ptr2);

}