#include <stdio.h>

int main() {

	int number = 5;

	printf("AND(����) : number �� 3���� ũ��. �׸��� 10 ���� �۴� : %d\n", number > 3 && number < 10); // ������ �� �� ���������� ��
	printf("AND(����) : number �� 3���� Ŀ���Ѵ�. �׸��� 10 ���� Ŀ���Ѵ�. : %d\n", number > 5 && number > 10); // ���� �� �ϳ��� �Ҹ��������� ����
	printf("OR(����) : number �� 5 �̰ų� 4�̴�. : %d\n", number == 5 || number == 4); // ���� �� �ϳ��� ���������� ��
	printf("OR(����) : number �� 6 �̰ų� 7�̴�. : %d\n", number == 6 || number == 7); // ������ �� �� �Ҹ��������� ����

	return 0;
}