#include <stdio.h>

void factorial(int n, int f) {
	while (n != 1) {
		printf("%d! = %d * %d!\n", n, n, n - 1);
		f = f * n;
		n -= 1;
		if (n == 1) {
			printf("%d! = %d\n", n, n);
		}
	}
	printf("결과는 : %d", f);
}
int main() {
	int num;
	int fac = 1;

	printf("팩토리얼 만들 숫자 입력 : ");
	scanf_s("%d", &num);

	factorial(num, fac);

	return 0;
}
/*int main() {
	// 정올 Beginner_Coder -> 팩토리얼
	// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=589&sca=2080
	int num;
	int fac=1;

	printf("팩토리얼 만들 숫자 입력 : ");
	scanf_s("%d", &num);

	while (num != 1) {
		printf("%d! = %d * %d!\n", num, num, num - 1);
		fac = fac * num;
		num -= 1;
		if (num == 1) {
			printf("%d! = %d\n", num, num);
		}
	}
	printf("결과는 : %d", fac);

	return 0;
}*/