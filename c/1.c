#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int reverse(int);

int main() {
	int num;

	scanf("%d", &num);

	printf("%d",
		num % 10 * 100 + num / 10 % 10 * 10 + num / 100);
}