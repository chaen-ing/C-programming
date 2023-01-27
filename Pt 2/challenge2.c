//10진수 입력받고 2진수로 변환해서 출력하기
#include <stdio.h>
int main(){
    int decimal, i = 0;
    int binary[10];
    printf("10진수 정수 입력 : ");
    scanf("%d",&decimal);
    
    while(decimal != 1){
        binary[i] = decimal % 2;
        decimal = decimal/2;
        i++;
    }
    binary[i] = 1;
    while(i >= 0){
        printf("%d",binary[i]);
        i--;
    }

}