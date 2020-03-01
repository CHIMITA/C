#include <stdio.h>
//비트 연산자
int main() {

	unsigned char a = 4;  // 0000 0100
	unsigned char b = 8;  // 0000 1000
	unsigned char c = a & b;

	printf("\n4와 8의 AND 연산 값 : %d\n", c); // AND >> 두 개의 비트가 모두 1일 때 1 반환 

		a = 6;  // 0000 0110
		b = 13; // 0000 1101
		c = a & b;

	printf("6과 13의 AND 연산 값 : %d\n", c);

		unsigned char d = 4;  // 0000 0100
		unsigned char e = 8;  // 0000 1000
		unsigned char f = d | e;

	printf("\n4와 8의 OR 연산 값 : %d\n", f); // OR >> 두 개의 비트 중 하나라도 1이면 1 반환

		d = 6;  // 0000 0110
		e = 13; // 0000 1101
		f = d | e;

	printf("6과 13의 OR 연산 값 : %d\n", f);

		unsigned char g = 4;  // 0000 0100
		unsigned char h = 8;  // 0000 1000
		unsigned char i = g ^ h;

	printf("\n4와 8의 XOR 연산 값 : %d\n", i); // XOR >> 두 개의 비트가 서로 다르면 1 반환 

		g = 6;  // 0000 0110
		h = 13; // 0000 1101
		i = g ^ h;

	printf("6과 13의 XOR 연산 값 : %d\n", i);

		unsigned char j = 4;  // 0000 0100 // NOT에서는 unsigned을 쓰지 않고 부호있는 정수를 출력한다면 - 음수로 출력 >> MSB가 1로 바뀌기 때문
		unsigned char k = 8;  // 0000 1000
		unsigned char l = ~j;
		unsigned char m = ~k;

	printf("\n4와 8의 NOT 연산 값 : %d, %d\n", l, m); // NOT >> AND, OR, XOR과는 다르게 피연산자 >> 한 값의 비트를 모두 반전

		j = 6;  // 0000 0110
		k = 13; // 0000 1101
		l = ~j;
		m = ~k;

	printf("6과 13의 NOT 연산 값 : %d, %d\n", l, m);

		
}