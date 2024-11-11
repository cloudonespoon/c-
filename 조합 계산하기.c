#include <stdio.h>

int fac(int n) {
	if (n <= 1) return 1;
	else return n * fac(n - 1);
}

int get_int() {
	int num;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	return num;
}

int main() {
	int n, r, result;
	n = get_int();
	r = get_int();
	result = fac(n) / fac(n - r) / fac(r);
	printf("C(%d, %d) = %d", n, r, result);
	return 0;
}