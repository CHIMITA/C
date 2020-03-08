#include <stdio.h>
//if문
int main(void) {
	int a;

	printf("숫자를 입력해주세요! >> ");
	scanf_s("%d", &a);

	if (a % 2 == 0) {// 조건
		printf("\n짝수입니다!\n");// 실행
	}
	if (a % 2 == 1) {
		printf("\n홀수입니다!\n");
	}

	return 0;
}


