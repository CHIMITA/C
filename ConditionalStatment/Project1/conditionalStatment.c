#include <stdio.h>
//if��
int main(void) {
	int a;

	printf("���ڸ� �Է����ּ���! >> ");
	scanf_s("%d", &a);

	if (a % 2 == 0) {// ����
		printf("\n¦���Դϴ�!\n");// ����
	}
	if (a % 2 == 1) {
		printf("\nȦ���Դϴ�!\n");
	}

	return 0;
}


