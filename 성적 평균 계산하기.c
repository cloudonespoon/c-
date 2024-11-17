#include <stdio.h>
#define STUDENTS 5

int main() {
	int students[STUDENTS] = { 10 };
	int sum=0, average;
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &students[i]);
		sum += students[i];
	}
	average = sum / STUDENTS;
	printf("성적 총점 = %d\n", sum);
	printf("성적 평균 = %d\n", average);
	return 0;
}