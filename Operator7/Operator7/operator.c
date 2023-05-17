#include <stdio.h>

int main(void) {

	// 왼쪽 SHIFT

	unsigned char a = 4 << 1;  // 0000 0100
	unsigned char b = 8 << 2;  // 0000 1000

	printf("\n4 << 1 : %d\n", a); // 0000 1000
	printf("8 << 2 : %d\n", b); // 0010 0000

	a = 6 << 3;  // 0000 0110
	b = 10 << 4; // 0000 1010

	printf("6 << 3 : %d\n", a); // 0011 0000
	printf("10 << 4 : %d\n", b); // 1010 0000

	//오른쪽 SHIFT

	unsigned char c = 4 >> 1;  // 0000 0100
	unsigned char d = 8 >> 2;  // 0000 1000

	printf("\n4 >> 1 : %d\n", c); // 0000 0010
	printf("8 >> 2 : %d\n", d); // 0000 0010

	c = 14 >> 3;  // 0000 1110
	d = 16 >> 4; // 0001 0000

	printf("14 >> 3 : %d\n", c); // 0000 0001 >> 1이 넘어가면 버려짐 
	printf("16 >> 4 : %d\n", d); // 0000 0001 

	char e = -16 >> 2;  // 1111 0000

	printf("\n-16 >> 2 : %d", e); // 1111 1100
	
}