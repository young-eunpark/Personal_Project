#include <stdio.h>
#define PI 3.14

void CircleArea(int r) {
	// ���� Language_Coder -> �Լ�1-�ڰ�����2
	// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=209&sca=10b0
	double area;

	area = r * r * PI;

	printf("%.2lf", area);
}
int main() {
	int radius;

	printf("������ �Է� : ");
	scanf_s("%d", &radius);

	CircleArea(radius);

	return 0;
}

/*#include <stdio.h>

void re_String(int n) {
	// ���� Language_Coder -> �Լ�1-�ڰ�����1
	// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=208&sca=10b0
	int i;

	for (i = 0; i < n; i++) {
		printf("~!@#$&*()_+|\n");
	}
}
int main() {
	int num;

	printf("�ݺ��� ���� �Է� : ");
	scanf_s("%d", &num);

	re_String(num);

	return 0;
}*/