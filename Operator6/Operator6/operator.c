#include <stdio.h>
//��Ʈ ������
int main() {

	unsigned char a = 4;  // 0000 0100
	unsigned char b = 8;  // 0000 1000
	unsigned char c = a & b;

	printf("\n4�� 8�� AND ���� �� : %d\n", c); // AND >> �� ���� ��Ʈ�� ��� 1�� �� 1 ��ȯ 

		a = 6;  // 0000 0110
		b = 13; // 0000 1101
		c = a & b;

	printf("6�� 13�� AND ���� �� : %d\n", c);

		unsigned char d = 4;  // 0000 0100
		unsigned char e = 8;  // 0000 1000
		unsigned char f = d | e;

	printf("\n4�� 8�� OR ���� �� : %d\n", f); // OR >> �� ���� ��Ʈ �� �ϳ��� 1�̸� 1 ��ȯ

		d = 6;  // 0000 0110
		e = 13; // 0000 1101
		f = d | e;

	printf("6�� 13�� OR ���� �� : %d\n", f);

		unsigned char g = 4;  // 0000 0100
		unsigned char h = 8;  // 0000 1000
		unsigned char i = g ^ h;

	printf("\n4�� 8�� XOR ���� �� : %d\n", i); // XOR >> �� ���� ��Ʈ�� ���� �ٸ��� 1 ��ȯ 

		g = 6;  // 0000 0110
		h = 13; // 0000 1101
		i = g ^ h;

	printf("6�� 13�� XOR ���� �� : %d\n", i);

		unsigned char j = 4;  // 0000 0100 // NOT������ unsigned�� ���� �ʰ� ��ȣ�ִ� ������ ����Ѵٸ� - ������ ��� >> MSB�� 1�� �ٲ�� ����
		unsigned char k = 8;  // 0000 1000
		unsigned char l = ~j;
		unsigned char m = ~k;

	printf("\n4�� 8�� NOT ���� �� : %d, %d\n", l, m); // NOT >> AND, OR, XOR���� �ٸ��� �ǿ����� >> �� ���� ��Ʈ�� ��� ����

		j = 6;  // 0000 0110
		k = 13; // 0000 1101
		l = ~j;
		m = ~k;

	printf("6�� 13�� NOT ���� �� : %d, %d\n", l, m);

		
}