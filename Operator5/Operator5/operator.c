#include <stdio.h>

int main() {

	int a = 5; // 5 �� �ʱ�ȭ �� ����

	a += 5;
	printf("%d\n", a); // 10 ���

	a -= 3;
	printf("%d\n", a); // 7 ���

	a *= 5;
	printf("%d\n", a); // 35 ���

	a /= 7;
	printf("%d\n", a); // 5 ���

	a %= 4;
	printf("%d\n", a); // ������ 1 ���

	return 0;
}