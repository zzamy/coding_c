#include <stdio.h>
#include <time.h>

//함수 선언은 라이브러리 호출 이후 바로 나와야 함
/* 
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
} */

//함수의 형태 : 반환형 함수이름(전달값){}


//반환값이 없는 함수
/* 
void function_without_retrun();

int main(void){
    function_without_retrun();

    return 0;
}

void function_without_retrun(){
    printf("반환값이 없는 함수 입니다.");
} */

//반환값이 있는 함수 
int function_with_retrun();
void p(int num);
//파라메타 값이 없는 함수
void function_without_params();

//반환값이 있는 함수
/*int main(void){
    int ret = function_with_retrun();
    p(ret);
    return 0;
}*/

int main(void){
    function_without_params();
    return 0;
}


//정의 모음
int function_with_retrun(){
    printf("반환값이 있는 함수 입니다. \n");
    return 10;
}

void p(int num){
    printf("num 은 %d 입니다 \n", num);
}
//전달값(parametas)이 없는 함수
void function_without_params(){
    printf("전달값이 없는 함수 입니다. \n");
}