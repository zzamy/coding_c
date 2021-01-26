#include <stdio.h>

int main(void){
    //배열
    //int subway_1 = 30;
    //int subway_2 = 40;
    //int subway_3 = 50;

    //printf("지하철 1호차에  %d명 타고 있습니다\n", subway_1);
    //printf("지하철 2호차에  %d명 타고 있습니다\n", subway_2);
    //printf("지하철 3호차에  %d명 타고 있습니다\n", subway_3);

    //여러개의 변수를 함께 동시에 생성
    //int subway_array[3]; // [0], [1], [2] int 변수가 생김
    //subway_array[0] = 10;
    //subway_array[1] = 20;
    //subway_array[2] = 30;
 
    //for (int i = 0; i < 3; i++)
    //{
    //    printf("지하철 %d호 차에 %d명이 타고 있습니다\n", i+1, subway_array[i]);
    //}

    //값 설정 방법
    //int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //for(int i = 0; i < 10; i++)
    //{
    //    printf("%d\n", arr[i]);
    //}

    //아래와 같이 하면 가비지(쓰레기) 값이 나오게 됨 >>> 초기화를 안해주었기 때문이다 (아래 예문은 함수만 선언하고 초기화를 안해준 것임)
    //int arr[10];
    //for(int i = 0; i < 10; i++)
    //{
    //    printf("%d\n", arr[i]);
    //}

    //배열 크기는 항상 상수로 선언 필요함

    //일부 초기화 선언시 예제
    //int arr[10] = {1,2}; //별도 초기화 미선언시, 3번째부터는 자동으로 0으로 초기화 됨
    //for (int i = 0; i<10; i++)
    //{
    //    printf("%d\n", arr[i]);
    //}

    return 0;
}