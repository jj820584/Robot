#include <stdio.h>

// 두 수를 입력받아 산술 연산 결과를 출력하는 함수
void performArithmeticOperations(int num1, int num2) {
    printf("덧셈: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("뺄셈: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("곱셈: %d * %d = %d\n", num1, num2, num1 * num2);
    
    // 나눗셈은 0으로 나누는 경우를 처리해야 함
    if (num2 != 0) {
        printf("나눗셈: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    } else {
        printf("나눗셈: 0으로 나눌 수 없습니다.\n");
    }
}

int main() {
    int a, b;

    // 두 수 입력받기
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    // 함수 호출하여 연산 결과 출력
    performArithmeticOperations(a, b);

    return 0;
}

