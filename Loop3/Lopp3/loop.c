#include <stdio.h>

int main() {
	int i = 1;
	int num;

	printf("출력할 단을 입력해주세요!>> ");
	scanf_s("%d", &num);

	do {
		printf("\n%d * %d= %d\n", num, i, i * num);
		i += 1;
	} while (i < 10);
	
	printf("\n끝!\n");

	return 0;
}