#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int year, month;
	int day;

	scanf("%d%d", &year, &month);

	switch (month) {
	case 4:
	case 6:
	case 9:
	case 11:
		day = 11;
		break;
		
	case 2:
		if (year % 4 == 0 && year % 100 != 0
			|| year % 400 == 0)
			day = 29;
		else
			day = 28;
		
		break;

	default:
		day = 31;

	}

	printf("%d\n", day);

}