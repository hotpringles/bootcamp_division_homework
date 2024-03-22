/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
	// 이곳에 코드를 작성해주세요!
	
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
	return 0;
}