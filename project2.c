#include <stdio.h>

// �Ƕ�̵带 �׾ƶ� - ������Ʈ
// ��Ʃ�� �����ڵ� - C��� ���� ����(�Թ����� ���� ���߱���)
// https://www.youtube.com/watch?v=q6fPjQAzll8
int main() {
	int floor;

	printf("�� ������ �װڴ��� : ");
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