#include <stdio.h>
//ifelse문
int main(void) {
	int a;

	printf("숫자를 입력해주세요!>> ");
	scanf_s("%d", &a);

	if (a % 2 == 0) {
		printf("\n짝수입니다!\n");// 조건이 참일 경우 실행 
	}
	else {
		printf("\n홀수입니다!\n");// 조건이 거짓일 경우 실행 
	}
	return 0;
}


