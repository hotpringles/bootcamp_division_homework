#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int age;

	scanf("%d", &age);

	if (age >= 61) {
		printf("DISCOUNT\nBOARD\n");
	}
	else {
		printf("BOARD\n");
	}
}