#include <stdio.h>

int main() {

	int a = 5; // 5 로 초기화 후 시작

	a += 5;
	printf("%d\n", a); // 10 출력

	a -= 3;
	printf("%d\n", a); // 7 출력

	a *= 5;
	printf("%d\n", a); // 35 출력

	a /= 7;
	printf("%d\n", a); // 5 출력

	a %= 4;
	printf("%d\n", a); // 나머지 1 출력

	return 0;
}