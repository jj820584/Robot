#include <stdio.h>

// �� ���� �Է¹޾� ��� ���� ����� ����ϴ� �Լ�
void performArithmeticOperations(int num1, int num2) {
    printf("����: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("����: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("����: %d * %d = %d\n", num1, num2, num1 * num2);
    
    // �������� 0���� ������ ��츦 ó���ؾ� ��
    if (num2 != 0) {
        printf("������: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    } else {
        printf("������: 0���� ���� �� �����ϴ�.\n");
    }
}

int main() {
    int a, b;

    // �� �� �Է¹ޱ�
    printf("�� ������ �Է��ϼ���: ");
    scanf("%d %d", &a, &b);

    // �Լ� ȣ���Ͽ� ���� ��� ���
    performArithmeticOperations(a, b);

    return 0;
}

