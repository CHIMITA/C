#include <stdio.h>

int main() {
	int i = 1;
	int num;

	printf("출력할 단을 입력하세요! >> ");
	scanf_s("%d", &num);

	while (i <= 9 )
	{
		printf("\n%d * %d = %d\n", num, i, i * num);
		i += 1;
	}
	printf("\n끝!\n");

	return 0;
}