#include <stdio.h>  //printf�� scanf���� c��� �Լ��� �������� ��������� �ҷ����� �۾�

// �Լ� ���� ����
int add(int a, int b);          //add��� ������ �������ؼ��� int a�� int b��� ���� �ҷ����־���Ѵ�.
void printResult(int result);

int main() {                    //���� ���� ����Ǵ� �Լ��̴�.��Ʈ������Ʈ��� �Ѵ�.
    int result = add(5, 3);     //������ �����ϱ� ���ؼ��� ������Ÿ���� �ʿ��ϴ�.������Ÿ���� �� 10���̴�. �� �O ���� ����� �ڷ����� �������̴�.

    return 0;
}

// �Լ� ����
int add(int a, int b) {
    return a + b;
}

void printResult(int result) {
    printf("���: %d\n", result);
}


