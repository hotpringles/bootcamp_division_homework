#include <stdio.h>

int main() {
	// 이곳에 코드를 작성해주세요!
	int age;

	scanf("%d", &age);

	if (age >= 61) {
		printf("DISCOUNT\nBOARD\n");
	}
	else {
		printf("BOARD\n");
	}

	return 0;
}