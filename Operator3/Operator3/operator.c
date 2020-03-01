#include <stdio.h>

int main() {
	int number = 5;

	printf("number 가 4보다 큽니까? %d\n", number > 4);    // 큼 1(참)
	printf("number 가 5보다 큽니까? %d\n", number > 5);    // 안 큼 0(거짓)
	printf("number 가 10보다 큽니까? %d\n", number > 10);   // 안 큼 0(거짓)

	printf("number 가 10보다 작습니까? %d\n", number < 10); // 작음 1(참)
	printf("number 가 5보다 작습니까? %d\n", number < 5);   // 안 작음 0(거짓)
	printf("number 가 4보다 작습니까? %d\n", number < 4);  // 안 작음 0(거짓)

	printf("number 가 5보다 크거나 같습니까? %d\n", number >= 5); // 크거나 같음 1(참)
	printf("number 가 5보다 작거나 같습니까? %d\n", number <= 5); // 작거나 같음 1(참)

	printf("number 는 5와 같습니까? %d\n", number == 5);  // 같음 1(참)
	printf("number 는 4와 같습니까? %d\n", number == 4);  // 안 같음 0(거짓)

	printf("number 는 5와 같지 않습니까? %d\n", number != 5); // 안 같음 0(거짓)
	printf("number 는 4와 같지 않습니까? %d\n", number != 4); // 안 같음 1(참)

	return 0;
}