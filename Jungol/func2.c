#include <stdio.h>

int find_Max(int a, int b, int c) {
	// 정올 Language_Coder -> 함수1-자가진단4
	// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=211&sca=10b0
	int min,max;
	min = a > b ? a:b;
	max = c > min ? c : min;

	return max;
}
int main() {
	int num1, num2, num3;

	printf("숫자 3개 입력\n");
	printf("숫자 1 : ");
	scanf_s("%d", &num1);
	
	printf("숫자 2 : ");
	scanf_s("%d", &num2);
	
	printf("숫자 3 : ");
	scanf_s("%d", &num3);
	

	printf("최댓값 : %d",find_Max(num1, num2, num3));
}
/*void make_Square(int n) {
	// 정올 Language_Coder -> 함수1-자가진단3
	// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=210&sca=10b0
	int i,j;
	int k = 1;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%2d", k);
			k++;
		}
		printf("\n");
	}
}
int main() {
	int num;

	printf("사각형 변의 길이 입력 : ");
	scanf_s("%d", &num);

	make_Square(num);
}*/