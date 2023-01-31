#include <stdio.h>
int main(){
    int *arr1[5]; //포인터 '배열'. 크기 5짜리 포인터를 담을 수 있는 배열
    int *arr2[3][5]; // 포인터 '배열'. 세로3, 가로5 크기. 포인터를 담을 수 있는 배열

    int **ptr1 = arr1;
    int *(*ptr2)[5] = arr2;

    printf("%p\n",arr1);
    printf("%p\n",ptr1);

    printf("%p\n",arr2);
    printf("%p\n",ptr2);

}