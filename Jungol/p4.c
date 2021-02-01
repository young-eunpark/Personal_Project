#include <stdio.h>

int main() {
	// 정올 Beginner_Coder -> 숫자사각형4
	// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&sca=20
	int num1;
	int kinds;

	printf("종류 선택 : 1, 2, 3 중 하나 선택\n\n");
	printf("숫자입력 : ");
	scanf_s("%d", &num1);
	printf("종류입력 : ");
	scanf_s("%d", &kinds);

	int i, j;
	int n = 1;
	switch (kinds) {
	case 1:
		for (i = 0; i < num1; i++) {
			for (j = 0; j < num1; j++) {
				printf("%d", n);
			}
			n++;
			printf("\n");
		}
	case 2:
		for (i = 0; i < num1; i++) {
			for (j = 0; j < num1; j++) {
				if (i % 2 == 0) {
					printf("%d", j+1);
				}
				else {
					printf("%d", num1-j);
				}
			}
			printf("\n");
		}
	case 3:
		for (i = 0; i < num1; i++) {
			for (j = 0; j < num1; j++) {
				printf("%2d", n * (j+1));
			}
			printf("\n");
			n++;
		}
	default:
		return 0;
	}
}
