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
	printf("�ڿ��� n�� �Է�: ");
	scanf("%d", &n);
	col(n);
	return 0;
}

	