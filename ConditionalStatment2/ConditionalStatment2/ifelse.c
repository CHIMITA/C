#include <stdio.h>
//ifelse��
int main(void) {
	int a;

	printf("���ڸ� �Է����ּ���!>> ");
	scanf_s("%d", &a);

	if (a % 2 == 0) {
		printf("\n¦���Դϴ�!\n");// ������ ���� ��� ���� 
	}
	else {
		printf("\nȦ���Դϴ�!\n");// ������ ������ ��� ���� 
	}
	return 0;
}


