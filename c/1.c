/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
	int num;

	scanf("%d", &num);

	printf("%d",
		num % 10 * 100 + num / 10 % 10 * 10 + num / 100);

	return 0;
}