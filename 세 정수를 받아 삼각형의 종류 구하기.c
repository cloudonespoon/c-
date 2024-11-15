#include <stdio.h>

void col(int n){
	int s;
	if (n == 1)
		printf("1")
		break;
	else
		if (n % 2 == 0)
		{
			s = n / 2;
			printf("%d - ", s);
		}
		else
		{
			s = 3 * n + 1;
			printf("%d - ", s);
		}
}

int main() {
	int n;
	printf("자연수 n을 입력: ");
	scanf("%d", &n);
	col(n);
	return 0;
}

	