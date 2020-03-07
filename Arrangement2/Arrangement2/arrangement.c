#include <stdio.h>

int main() {
	char arr[2][10]; // 세로 3, 가로 10의 이차누언 배열
	// 가로도 세로도 0부터 시작 
	
		printf("10자 이내의 문자열을 입력해주세요! : ");
	//	scanf_s("%s", arr[i]);
		if (scanf_s("%s", arr, (unsigned)sizeof arr) != 1) /* error */;
	

	printf("\n입력 한 이차원 배열 문자열 출력\n");

		printf("%s\n", arr);
	

	return 0;
}