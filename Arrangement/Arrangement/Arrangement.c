#include <stdio.h>

int main() {
	int arr[5] = { 1, 11 , 111, 1111, 11111 }; // ����� ���ÿ� �ʱ�ȭ

	for (int i = 0; i < 5; i++) {
		printf("arr �迭�� %d �� °�� �� : %d\n", i, arr[i]);
	}

	return 0;
}