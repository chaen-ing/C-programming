#include <stdio.h>
#include <stdlib.h>
int rand(void); // 의사 난수를 변환

int main(void){

    int i;
    printf("난수의 범위 : 0부터 99까지 \n");
    for(i = 0; i < 5; i++)
        printf("난수 출력 : %d \n",rand()%99);
    return 0;

}
