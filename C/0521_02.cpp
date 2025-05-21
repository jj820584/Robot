#include <stdio.h>  //printf와 scanf같은 c언어 함수를 쓰기위한 헤더파일을 불러오는 작업

// 함수 원형 선언
int add(int a, int b);          //add라는 변수를 쓰기위해서는 int a와 int b라는 것을 불러와주어야한다.
void printResult(int result);

int main() {                    //제일 먼저 실행되는 함수이다.앤트리포인트라고도 한다.
    int result = add(5, 3);     //변수를 선언하기 위해서는 데이터타입이 필요하다.데이터타입은 총 10개이다. 그 즁 현재 사용한 자료형은 정수형이다.

    return 0;
}

// 함수 정의
int add(int a, int b) {
    return a + b;
}

void printResult(int result) {
    printf("결과: %d\n", result);
}


