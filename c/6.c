#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ary[5];
	ary[0] = 'a';
	ary[1] = 'e';
	ary[2] = 'i';
	ary[3] = 'o';
	ary[4] = 'u';

	char input, result;
	scanf("%c", &input);
	
	for (int i = 0; i < sizeof(ary) / sizeof(char); i++) {
		if (input == ary[i]) {
			result = 'O';
			break;
		}
		else
			result = 'X';
	}

	printf("%c\n", result);
}