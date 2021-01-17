#include <stdio.h>
#include <time.h>

//함수 선언은 라이브러리 호출 이후 바로 나와야 함
void p(int num);

//함수 정의는 항상 선언 이후 사용 필요, 단 선언뒤 어느 위치든 큰 상관은 없음
void p(int num){
    printf("num 은 %d 입니다 \n", num);
}

int main(void) {
    int num = 2;
    p(num);
 
    num = num+3;
    p(num);

    num -= 1;
    p(num);

    num *= 3;
    p(num);

    num /= 6;
    p(num);
    
    return 0;
}