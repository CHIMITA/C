#include <stdio.h>

int main() {

	int number = 5;

	printf("AND(논리곱) : number 는 3보다 크다. 그리고 10 보다 작다 : %d\n", number > 3 && number < 10); // 조건을 둘 다 만족함으로 참
	printf("AND(논리곱) : number 는 3보다 커야한다. 그리고 10 보다 커야한다. : %d\n", number > 5 && number > 10); // 조건 중 하나라도 불만족함으로 거짓
	printf("OR(논리합) : number 는 5 이거나 4이다. : %d\n", number == 5 || number == 4); // 조건 중 하나라도 만족함으로 참
	printf("OR(논리합) : number 는 6 이거나 7이다. : %d\n", number == 6 || number == 7); // 조건을 둘 다 불만족함으로 거짓

	return 0;
}