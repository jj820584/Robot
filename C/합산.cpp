#include <stdio.h>  //printf와 scanf같은 c언어 함수를 쓰기위한 헤더파일을 불러오는 작업

int main()
{
    int i, number, sum =0;
    
    printf("i를 입력하세요 \n\n");
    scanf("%d", &number);           // 여기서 &는 number의 주소를 가져오는 것을 의미한다.

    for(i=1;i<=number;i++)
    {
        sum += i;
    }
    printf("1부터 i까지의 합은 %d 입니다.", sum);    // 여기서 sum은 주소가 아닌 변수 그 자체를 불러온다.
}
