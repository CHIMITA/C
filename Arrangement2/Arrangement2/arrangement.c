#include <stdio.h>

int main() {
	char arr[2][10]; // ���� 3, ���� 10�� �������� �迭
	// ���ε� ���ε� 0���� ���� 
	
		printf("10�� �̳��� ���ڿ��� �Է����ּ���! : ");
	//	scanf_s("%s", arr[i]);
		if (scanf_s("%s", arr, (unsigned)sizeof arr) != 1) /* error */;
	

	printf("\n�Է� �� ������ �迭 ���ڿ� ���\n");

		printf("%s\n", arr);
	

	return 0;
}