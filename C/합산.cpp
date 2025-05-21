#include <stdio.h>

int main() {
    int scores[10];        // 학생 성적을 저장할 배열
    int sum = 0;           // 총합 저장
    double average;        // 평균 저장
    int i;

    // 10명의 성적 입력받기
    for (i = 0; i < 10; i++) {
        printf("%d번째 학생의 성적을 입력하세요: ", i + 1);
        scanf("%d", &scores[i]);

        sum += scores[i];  // 입력과 동시에 합산
    }

    // 평균 계산 (소수점 고려 → 실수형 나눗셈)
    average = sum / 10.0;

    // 결과 출력
    printf("\n총합: %d\n", sum);
    printf("평균: %.2f\n", average);

    return 0;
}

