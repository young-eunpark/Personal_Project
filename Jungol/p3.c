#include <stdio.h>

/*int main() {
	int num;

	printf("¼ýÀÚÀÔ·Â : ");
	scanf_s("%d", &num);

	int i,j;
	int n = 1;
	int arr[101][101];
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

	printf("¼ýÀÚÀÔ·Â : ");
	scanf_s("%d", &num);

	makeSquare(num);
}
