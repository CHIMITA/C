#include <stdio.h>

int main() {
	int number = 5;

	printf("number �� 4���� Ů�ϱ�? %d\n", number > 4);    // ŭ 1(��)
	printf("number �� 5���� Ů�ϱ�? %d\n", number > 5);    // �� ŭ 0(����)
	printf("number �� 10���� Ů�ϱ�? %d\n", number > 10);   // �� ŭ 0(����)

	printf("number �� 10���� �۽��ϱ�? %d\n", number < 10); // ���� 1(��)
	printf("number �� 5���� �۽��ϱ�? %d\n", number < 5);   // �� ���� 0(����)
	printf("number �� 4���� �۽��ϱ�? %d\n", number < 4);  // �� ���� 0(����)

	printf("number �� 5���� ũ�ų� �����ϱ�? %d\n", number >= 5); // ũ�ų� ���� 1(��)
	printf("number �� 5���� �۰ų� �����ϱ�? %d\n", number <= 5); // �۰ų� ���� 1(��)

	printf("number �� 5�� �����ϱ�? %d\n", number == 5);  // ���� 1(��)
	printf("number �� 4�� �����ϱ�? %d\n", number == 4);  // �� ���� 0(����)

	printf("number �� 5�� ���� �ʽ��ϱ�? %d\n", number != 5); // �� ���� 0(����)
	printf("number �� 4�� ���� �ʽ��ϱ�? %d\n", number != 4); // �� ���� 1(��)

	return 0;
}