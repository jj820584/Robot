#include <stdio.h>  //printf�� scanf���� c��� �Լ��� �������� ��������� �ҷ����� �۾�

int main()
{
    int i, number, sum =0;
    
    printf("i�� �Է��ϼ��� \n\n");
    scanf("%d", &number);           // ���⼭ &�� number�� �ּҸ� �������� ���� �ǹ��Ѵ�.

    for(i=1;i<=number;i++)
    {
        sum += i;
    }
    printf("1���� i������ ���� %d �Դϴ�.", sum);    // ���⼭ sum�� �ּҰ� �ƴ� ���� �� ��ü�� �ҷ��´�.
}
