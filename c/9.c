#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main() {
	while (1) {
		int num;

		scanf("%d", &num);

		if (num > 0) {
			printf("%d\n", num * (num + 1) / 2);
			break;
		}
		else {
			printf("X\n");
		}
	}
}