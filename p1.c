#include <stdio.h>

/*int main() {
	// ���� Beginner_Coder -> ���ڻ簢��1
	// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&sca=20
	int num1;
	int num2;

	printf("���� �Է� : ");
	scanf_s("%d", &num1);
	printf("���� �Է� : ");
	scanf_s("%d", &num2);

	int i, j;
	int n = 1;
	for (i = 0; i < num1; i++) {
		for (j = 0 ; j < num2; j++) {
			printf("%d", n);
			n++;
		}
		printf("\n");
	}
}*/

void makeSquare(int a, int b) {
	// �Լ� ���
	int i, j;
	int n = 1;

	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			printf("%d", n);
			n++;
		}
		printf("\n");
	}
}
int main() {
	int num1;
	int num2;

	printf("���� �Է� : ");
	scanf_s("%d", &num1);
	printf("���� �Է� : ");
	scanf_s("%d", &num2);

	makeSquare(num1, num2);
}