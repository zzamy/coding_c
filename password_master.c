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

//선언 모음
//반환값이 있는 함수 
int function_with_retrun();
void p(int num);
//파라메타 값이 없는 함수
void function_without_params();
//전달값이 있는 함수 (반환 X, 전달값을 받음)
void function_with_params(int no1, int no2, int no3);

int apple(int total, int ate); //전체 토탈 개에서 잇 개를 먹고 남은 수를 반환

//반환값이 있는 함수
/*int main(void){
    int ret = function_with_retrun();
    p(ret);
    return 0;
}*/


//전달값이 없는 함수
/* int main(void){
    function_without_params();
    return 0;
} */

//전달값이 있는 함수
/*int main(void){
    function_with_params(1, 2, 3);
    return 0;
} */

//전달값도 받고 반환값도 보내주는 함수
int main(void){
    int ret = apple(5, 2); //5개의 사과 중에서 2개를 먹었고 남은 숫자를 말하도록 만들것임
    printf("사과 5개중에 2개를 먹으면? %d가 남아요 \n", ret);
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

//전달값이 있는 함수
void function_with_params(int no1, int no2, int no3){
    printf("전달 값이 있는 함수이며, 전달값은 %d, %d, %d 입니다 \n", no1, no2, no3);
}

//전달값과 반환 값이 있는 함수
int apple(int total, int ate){
    printf("전달값과 반환값이 있습니다. \n");
    return total-ate;
}