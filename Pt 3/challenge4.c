// 랜덤 주사위
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rand(void); // 의사 난수를 변환
void srand(unsigned int seed); // 발생할 난수의 씨드 값 지정


int main(void){

    int i;
    srand((int)time(NULL));
    for(i = 1; i < 3; i++)
        printf("주사위 %d의 결과 %d \n",i,rand()%6+1);
    return 0;

}
