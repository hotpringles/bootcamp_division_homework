#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score;
	char grade;

	scanf("%d", &score);

	if (score > 100)
		return 0;

	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("%c\n", grade);
}