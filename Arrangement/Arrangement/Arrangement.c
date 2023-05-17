#include <stdio.h>

int main() {
	int arr[5] = { 1, 11 , 111, 1111, 11111 }; // 선언과 동시에 초기화

	for (int i = 0; i < 5; i++) {
		printf("arr 배열의 %d 번 째의 값 : %d\n", i, arr[i]);
	}

	return 0;
}