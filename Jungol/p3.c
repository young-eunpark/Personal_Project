#include <stdio.h>

/*int main() {
// 정올 Beginner_Coder -> 숫자사각형3
	// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&sca=20
	int num;

	printf("숫자입력 : ");
	scanf_s("%d", &num);

	int i,j;
	int n = 1;
	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++) {
			printf("%2d", (i + n) + (num * j));
		}
		printf("\n");
	}
}*/

void makeSquare(int a) {
	int i, j;
	int n = 1;
	for (i = 0; i < a; i++) {
		for (j = 0; j < a; j++) {
			printf("%2d", (i + n) + (a * j));
		}
		printf("\n");
	}
}
int main() {
	int num;

	printf("숫자입력 : ");
	scanf_s("%d", &num);

	makeSquare(num);
}
