#include <stdio.h>
int main(){
    char word[10];
    printf("영단어를 입력하시오 : ");
    scanf("%s",word);

    int len = 0;
    while(word[len] != '\0'){
        len++;
    }

    // int wordASCII[10];
    // for(int i = 0; i < len; i++){
    //     wordASCII[i] = word[i];
    // }

    // int maxidx = 0;
    // for(int i = 0; i < len; i++){
    //     if(wordASCII[i] > wordASCII[maxidx])
    //         maxidx = i;
    // }

    int max = 0;
    for(int i = 0; i < len; i++){
        if(word[i] > max)
            max = word[i];
    }

    printf("아스키 코드 값이 가장 큰 문자 : %c\n", max);

    // printf("아스키 코드 값이 가장 큰 문자 : %c\n",word[maxidx]);
}