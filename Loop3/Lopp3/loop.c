#include <stdio.h>

int main() {
	int i = 1;
	int num;

	printf("����� ���� �Է����ּ���!>> ");
	scanf_s("%d", &num);

	do {
		printf("\n%d * %d= %d\n", num, i, i * num);
		i += 1;
	} while (i < 10);
	
	printf("\n��!\n");

	return 0;
}