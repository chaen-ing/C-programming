#include <stdio.h>
int SquareByValue(int num);
void SquareByReference(int *ptr);

int main(){
    int num;
    printf("정수를 입력하시오 : ");
    scanf("%d",&num);
    printf("Call-by-value 함수 호출결과 : %d\n",SquareByValue(num));
    SquareByReference(&num);
    printf("Call-by-reference 함수 호출결과 : %d\n",num);

}

int SquareByValue(int num){
    return num * num;
}

void SquareByReference(int *ptr){
    *ptr *= *ptr;
}