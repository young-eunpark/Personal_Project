#include <stdio.h>
// Up and Down
// ��Ʃ�� �����ڵ� - C��� ���� ����(�Թ����� ���� ���߱���)
// https://www.youtube.com/watch?v=q6fPjQAzll8
// �̰��� ������ �ۼ��� �ڵ��̸� ������ ����� �ٸ� �� �ֽ��ϴ�.
int main() {
	srand(time(NULL));
	int number = rand() % 100 + 1;
	
	int answer = 0;
	int chance = 5;

	printf("Up and Down �����Դϴ�.\n");
	while (number > 0) {
		printf("���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &answer);
		if (answer > number) {
			printf("Down\n");
			chance = chance - 1;
			printf("%d���� ��ȸ�� ���ҽ��ϴ�.\n",chance);
		}
		if (answer < number) {
			printf("Up\n");
			chance = chance - 1;
			printf("%d���� ��ȸ�� ���ҽ��ϴ�.\n", chance);
		}
		if (answer == number) {
			printf("\n--------------------------------------\n");
			printf("\n������ ���߾����ϴ�!\n");
			printf("���� ��ȸ�� %d�� �̾����ϴ�! �����մϴ�.\n",chance);
			printf("\n--------------------------------------\n");
			break;
		}
		if (chance == 0) {
			printf("\n--------------------------------------\n");
			printf("\n������ %d�̾����ϴ�.\n",number);
			printf("���� ��ȸ�� �����ϴ�. �ٽ� �õ��ϼ���\n");
			printf("\n--------------------------------------\n");
			break;
		}
	}
}