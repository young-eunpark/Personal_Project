#include <stdio.h>

// 피라미드를 쌓아라 - 프로젝트
// 유튜브 나도코딩 - C언어 무료 강의(입문부터 게임 개발까지)
// https://www.youtube.com/watch?v=q6fPjQAzll8
int main() {
	int floor;

	printf("몇 층으로 쌓겠느냐 : ");
	scanf_s("%d", &floor);

	int i, j;
	for (i = 1; i <= floor; i++) {
		for (j = floor; j > i; j--) {
			printf(" ");
		}
		for (j = 1; j < (i * 2); j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}