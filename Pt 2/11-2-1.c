#include <stdio.h>

int main(){
    char str[100];
    printf("문자열을 입력하시오 : ");
    scanf("%s",str);
    int i = 0;
    while(str[i] != '\0'){ // str[i] != 0 과 동일
        i++;
    }
    
    printf("문자열의 길이 : %d\n",i);
}