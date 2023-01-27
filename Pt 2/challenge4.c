//회문인지 판단하는 함수정의. 대소문자까지 일치해야함. 문자열의 길이를 알아야함 -> strlen함수(문자열 전체길이가 아닌 문자열의 길이 반환)
#include <stdio.h>
#include <string.h>

int palindrome(char *param, int len){
    char *ptr1=&param[0], *ptr2=&param[len-1];
    for(int i = 0; i < len / 2; i++){
        if(*ptr1 == *ptr2){
            ptr1++;
            ptr2--;
        }
        else{
            return 1;
        }
    }
    return 0;
}

int main(){
    char word[10];
    printf("문자열 입력 : ");
    scanf("%s",word);
    int len = strlen(word);
    int n = palindrome(word,len);
    if(n == 1){
        printf("회문이 아닙니다.\n");
    }
    else{
        printf("회문입니다.\n");
    }
}

