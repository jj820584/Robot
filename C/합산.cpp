#include <stdio.h>

int main() {
    int scores[10];        // �л� ������ ������ �迭
    int sum = 0;           // ���� ����
    double average;        // ��� ����
    int i;

    // 10���� ���� �Է¹ޱ�
    for (i = 0; i < 10; i++) {
        printf("%d��° �л��� ������ �Է��ϼ���: ", i + 1);
        scanf("%d", &scores[i]);

        sum += scores[i];  // �Է°� ���ÿ� �ջ�
    }

    // ��� ��� (�Ҽ��� ��� �� �Ǽ��� ������)
    average = sum / 10.0;

    // ��� ���
    printf("\n����: %d\n", sum);
    printf("���: %.2f\n", average);

    return 0;
}

