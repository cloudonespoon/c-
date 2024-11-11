/*********************************************************************************************
기초컴퓨터 프로그래밍 06 과제
날짜 : 2024년 11월 08일
학번 : 2022039015
이름 : 조현강
사용자로부터 성적을 받아 별표의 가로 막대그래프로 표현하는 프로그램
**********************************************************************************************/
#include <stdio.h>                                     // 전처리기. C 언어의 기본 함수들을 포함합니다.

int star(int score) {                                  // 정수를 받아 별의 개수를 계산하는 함수입니다.
    int star = score / 10;                             // 점수를 10으로 나눈 몫을 별의 개수로 정의합니다.
    return star;                                       // 별의 개수를 반환합니다.
}

void grape(int star) {                                 // 별의 개수를 받아 별을 출력하는 함수입니다.
    for (int i = 1; i <= star; i++) {                  // star만큼 반복하여 별을 출력합니다.
        printf("*");                                   // 별을 출력합니다.
    }
    printf(" (%d개)\n", star);                         // 별의 개수와 함께 출력합니다.
}

int main() {                                           // 이번 프로그램의 메인 함수입니다.
    int num1, num2;                                    // 정수형 변수 num1과 num2를 선언합니다.
    int star1, star2;                                  // 별 개수를 저장할 star1, star2 변수를 선언합니다.

    printf("홍길동의 점수를 입력하시오: ");            // 홍길동의 점수를 입력하도록 안내 문구를 출력합니다.
    scanf("%d", &num1);                                // 사용자로부터 점수를 입력받아 num1에 저장합니다.

    printf("이순신의 점수를 입력하시오: ");            // 이순신의 점수를 입력하도록 안내 문구를 출력합니다.
    scanf("%d", &num2);                                // 사용자로부터 점수를 입력받아 num2에 저장합니다.

    star1 = star(num1);                                // 홍길동의 점수를 별 개수로 계산하여 star1에 저장합니다.
    star2 = star(num2);                                // 이순신의 점수를 별 개수로 계산하여 star2에 저장합니다.

    printf("홍길동의 별: ");                           // 홍길동의 별 개수를 출력합니다.
    grape(star1);                                      // 홍길동의 별을 출력하는 grape() 함수를 호출합니다.

    printf("이순신의 별: ");                           // 이순신의 별 개수를 출력합니다.
    grape(star2);                                      // 이순신의 별을 출력하는 grape() 함수를 호출합니다.

    return 0;                                          // 프로그램이 정상 종료되었음을 나타냅니다.
}

