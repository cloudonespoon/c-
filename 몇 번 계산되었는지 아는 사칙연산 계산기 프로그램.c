#include <stdio.h>											// 전처리기, c언어의 기본 함수들을 포함합니다.

void plus(int a, int b);									// plus라는 함수의 원형을 정의합니다.
void minus(int a, int b);									// minus라는 함수의 원형을 정의합니다.
void mul(int a, int b);										// mul이라는 함수의 원형을 정의합니다.
void div(int a, int b);										// div라는 함수의 원형을 정의합니다.

int a, b;													// 정수형 변수 a, b를 선언합니다.
char c;														// 문자형 변수 c를 선언합니다.

int main()													// 이번 프로그램의 메인 함수입니다.
{
	for (int i = 0; i < 10; i++) {							// i가 0부터 10보다 작을 때, 1씩 증가하며 10번 반복합니다. (0~9)
		printf("연산을 입력하시오: ");						// 연산 입력 안내 문구를 출력합니다.
		scanf("%d %c %d", &a, &c, &b);						// 사용자로부터 수식을 입력 받습니다.
		switch (c) {										// switch 조건문을 이용해 변수 c를 판단합니다.
			case '+':										// c가 '+'일 경우
				plus(a, b);									// a, b를 인자로 하여 plsu 함수를 호출합니다.
				break;										// switch 문을 빠져나옵니다.
			case '-':										// c가 '-'일 경우
				minus(a, b);								// a, b를 인자로 하여 minus 함수를 호출합니다.
				break;										// switch 문을 빠져나옵니다.
			case '*':										// c가 '*'일 경우
				mul(a, b);									// a, b를 인자로 하여 mul 함수를 호출합니다.
				break;										// switch 문을 빠져나옵니다.
			case '/':										// c가 '/'일 경우
				div(a, b);									// a, b를 인자로 하여 div 함수를 호출합니다.
				break;										// switch 문을 빠져나옵니다.
		}
	}
}

void plus(int a, int b) {									// 반환형이 void이고 정수형 매개변수 a,b를 받는 plus 함수를 선언합니다.
	static int count = 0;									// 정적 지역 변수로 바꾸는 static을 사용하여 count를 0으로 초기화합니다.
	count++;												// count를 1 증가시킵니다.
	printf("덧셈은 총 %d번 실행되었습니다.\n", count);		// 덧셈이 몇 번 실행되었는지를 count 변수를 이용해 출력합니다.
	printf("연산의 결과: %d\n", a + b);						// 연산의 결과를 출력합니다.
}

void minus(int a, int b) {									// 반환형이 void이고 정수형 매개변수 a,b를 받는 minus 함수를 선언합니다.
	static int count = 0;									// 정적 지역 변수로 바꾸는 static을 사용하여 count를 0으로 초기화합니다.
	count++;												// count를 1 증가시킵니다.
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count);		// 뺄셈이 몇 번 실행되었는지를 count 변수를 이용해 출력합니다.
	printf("연산의 결과: %d\n", a - b);						// 연산의 결과를 출력합니다.
}

void mul(int a, int b) {									// 반환형이 void이고 정수형 매개변수 a,b를 받는 mul 함수를 선언합니다.
	static int count = 0;									// 정적 지역 변수로 바꾸는 static을 사용하여 count를 0으로 초기화합니다.
	count++;												// count를 1 증가시킵니다.
	printf("곱셈은 총 %d번 실행되었습니다.\n", count);		// 곱셈이 몇 번 실행되었는지를 count 변수를 이용해 출력합니다.
	printf("연산의 결과: %d\n", a * b);						// 연산의 결과를 출력합니다.				
}

void div(int a, int b) {									// 반환형이 void이고 정수형 매개변수 a,b를 받는 div 함수를 선언합니다.
	static int count = 0;									// 정적 지역 변수로 바꾸는 static을 사용하여 count를 0으로 초기화합니다.
	count++;												// count를 1 증가시킵니다.
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count);	// 나눗셈이 몇 번 실행되었는지를 count 변수를 이용해 출력합니다.
	printf("연산의 결과: %d\n", a / b);						// 연산의 결과를 출력합니다.
}