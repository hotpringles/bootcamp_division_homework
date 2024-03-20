#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int time;

	scanf("%d", &time);

	if (!(0 <= time && time <= 23))
		printf("시간을 다시 입력해주세요.\n");

	if (time < 12)
		printf("AM\n");
	else
		printf("PM\n");

	return 0;
}