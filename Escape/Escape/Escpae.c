#include <stdio.h>

void main() {

	int ageNum;
	int chance = 0;
	int age = 1;
	int schoolNum;

	printf("안녕하세요! 박지원입니다\n");      //  \n >> 줄 바꿈
	printf("오늘은 저의 대한 문제를 내보려 합니다!\b");  // \b >> backspace의 약자  
	printf("\n\t저는 몇 살일까요\? 맞춰 보세요\n");  //  \t >> tab의 약자 >> 한 단락 띄움  \? >> ? 출력 (\없어도 출력 됨)
	printf("\t\v1. 17살 2. 18살 3. 19살 >> ");  //  \v >> 수직 tab의 약자 (콘솔창에선 지원 안됨)

	scanf_s("%d번\n", &ageNum);  //  입력 받음 scanf의 안정성을 개선한 버전이 scanf_s임 

		
	if (ageNum == 2) {  //  조건문
		printf("\n정답! 소름이에요! 저는 \"낭랑 십팔세\"랍니다~~\n");  // \" \' >> 큰 따옴표와 작은 따옴표를 printf 함수 안에 사용하여 "" ''를 출력 할 수 있음
	} 
	else if (ageNum) {  //  조건이 거짓이면 출력
		printf("\n!\? 틀렸어요! 다시 선택 해주세요^^\\");  //  \?  >> ? 출력  \\  >> \ 출력
		printf("\n\t\v1. 17살 2. 18살 3. 19살 >> ");
		scanf_s("%d번\n", &ageNum);
		if (ageNum == 2) {
			printf("\n정답! 소름이에요! 저는 \"낭랑 십팔세\"랍니다~~\n");
		}
		else if (ageNum) {  //  조건이 거짓이면 출력
			printf("\n!\? 틀렸어요! 다시 시작 해주세요^^\\");
			return;
		}
	}

	printf("\n\t두번째 문제! 저는 어느 학교에 다니고 있을까요?\n");
	printf("\t\v1. 특성화고 2. 일반고 3. 과학고 >> ");
	scanf_s("%d번\n", &schoolNum);
	if (schoolNum == 1) {  //  조건문
		printf("\n정답! 소름이에요! 저는 \"특성화고\"에 다니고 있답니다~~\n");  // \" \' >> 큰 따옴표와 작은 따옴표를 printf 함수 안에 사용하여 "" ''를 출력 할 수 있음
	}
	else if (schoolNum) {  //  조건이 거짓이면 출력
		printf("\n!\? 틀렸어요! 다시 선택 해주세요^^\\");  //  \?  >> ? 출력  \\  >> \ 출력
		printf("\n\t\v1. 특성화고 2. 일반고 3. 과학고 >> ");
		scanf_s("%d번\n", &schoolNum);
		if (schoolNum == 1) {
			printf("\n정답! 소름이에요! 저는 \"특성화고\"에 다니고 있답니다~~\n");
		}
		else if (schoolNum) {  //  조건이 거짓이면 출력
			printf("\n!\? 틀렸어요! 다시 시작 해주세요^^\\");
			return;
		}
	}
	return;
}
