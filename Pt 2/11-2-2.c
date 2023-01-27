#include <stdio.h>
int main(){
    char str[10];
    printf("영단어를 입력하시오 : ");
    scanf("%s",str);

    int len = 0;
    while(str[len] != '\0'){
        len++; 
    } // 길이 계산
    
    for(int i = 0; i < len/2 ; i++){
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    } // temp로 문자열 뒤집기

    printf("뒤집은 문자열 : %s\n",str);

}