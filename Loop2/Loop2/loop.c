#include <stdio.h>

int main() {
	int i = 1;
	int num;

	printf("����� ���� �Է��ϼ���! >> ");
	scanf_s("%d", &num);

	while (i <= 9 )
	{
		printf("\n%d * %d = %d\n", num, i, i * num);
		i += 1;
	}
	printf("\n��!\n");

	return 0;
}