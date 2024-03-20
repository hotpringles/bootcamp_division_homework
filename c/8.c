#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int);
int factorial(int);

int main() {
	int num;
	scanf("%d", &num);

	if (num > 12) return;

	printf("%d\n", sum(num));
	printf("%d\n", factorial(num));
}

int sum(int num) {
	return num * (num + 1) / 2;
}

int factorial(int num) {
	if (num == 0) return 1;
	
	return num * factorial(num - 1);
}