/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/


#include <stdio.h>

int main() {
	// 이곳에 코드를 작성해주세요!
	

	int num;
	scanf("%d", &num);

	if (num > 12) return 0;

	int result1 = num * (num + 1) / 2;
	printf("%d\n", result1);
	int result2 = 1;
	for(int i = 1; i <= num; i++) {
		result2 *= i;
	}
	printf("%d\n", result2);

	return 0;

}