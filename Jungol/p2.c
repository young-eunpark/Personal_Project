#include <stdio.h>

/*int main() {
	// 정올 Beginner_Coder -> 숫자사각형2
	// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&sca=20
	int num1;
	int num2;

	printf("숫자입력 : ");
	scanf_s("%d", &num1);
	printf("숫자입력 : ");
	scanf_s("%d", &num2);

	int i, j;
	int n = 1;
	int arr[101][101];

	for (i = 0; i < num1; i++) {
		if (i % 2 == 0) {
			for (j = 0; j < num2; j++) {
				arr[i][j] = n++;
			}
		}
		else {
			for (j = num2-1; j >= 0; j--) {
				arr[i][j] = n++;
			}
		}
	}
	for (i = 0; i < num1; i++) {
		for (j = 0; j < num2; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}*/

int i, j;
int arr[101][101];

void fill(int a, int b) {
	int n = 1; // 함수 사용

	for (i = 0; i < a; i++) {
		if (i % 2 == 0) {
			for (j = 0; j < b; j++) {
				arr[i][j] = n++;
			}
		}
		else {
			for (j = b - 1; j >= 0; j--) {
				arr[i][j] = n++;
			}
		}
	}
}
void printArr(int a, int b) {
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int num1;
	int num2;

	printf("숫자입력 : ");
	scanf_s("%d", &num1);
	printf("숫자입력 : ");
	scanf_s("%d", &num2);

	fill(num1, num2);
	printArr(num1, num2);
}
