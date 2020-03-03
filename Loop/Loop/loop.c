#include <stdio.h>
void gugudan(int k);
int main(void)
{
	int dan;
	printf("원하는 단을 입력>>");
	scanf_s("%d", &dan);
	gugudan(dan);
	return 0;
}

void gugudan(int k)
{
	int i;
	for (i = 1; i <= 9; i += 1){
		printf("\n%d * %d = %d\n", k, i, k * i);
}
	printf("\n끝!\n");
}

