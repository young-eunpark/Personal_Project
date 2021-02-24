#include <stdio.h>
#define PI 3.14

void CircleArea(int r) {
	// 정올 Language_Coder -> 함수1-자가진단2
	// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=209&sca=10b0
	double area;

	area = r * r * PI;

	printf("%.2lf", area);
}
int main() {
	int radius;

	printf("반지름 입력 : ");
	scanf_s("%d", &radius);

	CircleArea(radius);

	return 0;
}

/*#include <stdio.h>

void re_String(int n) {
	// 정올 Language_Coder -> 함수1-자가진단1
	// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=208&sca=10b0
	int i;

	for (i = 0; i < n; i++) {
		printf("~!@#$&*()_+|\n");
	}
}
int main() {
	int num;

	printf("반복할 숫자 입력 : ");
	scanf_s("%d", &num);

	re_String(num);

	return 0;
}*/