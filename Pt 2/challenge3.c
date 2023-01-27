//배열에 숫자 10개 입력받는데 홀수면 앞에, 짝수면 뒤에부터 채우고 출력하기
#include <stdio.h>
int main(){
    int arr[10], num;
    int *ptr1 = &arr[0], *ptr2 = &arr[9];
    printf("총 10개의 숫자 입력\n");
    for(int i = 0; i < 10; i++){
        printf("입력 : ");
        scanf("%d",&num);
        if(num % 2 == 0){ // 짝수일때
            *ptr2 = num;
            ptr2--;
        }
        else{ //홀수일때
            *ptr1 = num;
            ptr1++;
        }
    }

    printf("배열 요소의 출력 : ");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
}