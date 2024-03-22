/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
	// 이곳에 코드를 작성해주세요!
	
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

	return 0;
}