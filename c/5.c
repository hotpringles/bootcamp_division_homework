#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int age, height;

	scanf("%d%d", &age, &height);

	if (age >= 14 || height >= 160)
		printf("X\n");
	else
		printf("O\n");
}