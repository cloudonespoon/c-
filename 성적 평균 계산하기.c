#include <stdio.h>
#define STUDENTS 5

int main() {
	int students[STUDENTS] = { 10 };
	int sum=0, average;
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf("%d", &students[i]);
		sum += students[i];
	}
	average = sum / STUDENTS;
	printf("���� ���� = %d\n", sum);
	printf("���� ��� = %d\n", average);
	return 0;
}