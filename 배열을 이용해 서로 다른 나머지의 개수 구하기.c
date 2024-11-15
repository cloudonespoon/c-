#include <stdio.h>

int main() {
	int num[10];
	int namu[10];
	int count=10;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		namu[i] = num[i] % 10;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (namu[i] == namu[j])
				count--;
		}
		count++;
	}
	printf("서로 다른 나머지의 개수는 %d개 입니다.", count);
	return 0;
}
