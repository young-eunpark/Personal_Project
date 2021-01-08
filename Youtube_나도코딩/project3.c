#include <stdio.h>
// Up and Down
// 유튜브 나도코딩 - C언어 무료 강의(입문부터 게임 개발까지)
// https://www.youtube.com/watch?v=q6fPjQAzll8
// 이것은 개인이 작성한 코드이며 영상의 정답과 다를 수 있습니다.
int main() {
	srand(time(NULL));
	int number = rand() % 100 + 1;
	
	int answer = 0;
	int chance = 5;

	printf("Up and Down 게임입니다.\n");
	while (number > 0) {
		printf("숫자를 입력하세요 : ");
		scanf_s("%d", &answer);
		if (answer > number) {
			printf("Down\n");
			chance = chance - 1;
			printf("%d번의 기회가 남았습니다.\n",chance);
		}
		if (answer < number) {
			printf("Up\n");
			chance = chance - 1;
			printf("%d번의 기회가 남았습니다.\n", chance);
		}
		if (answer == number) {
			printf("\n--------------------------------------\n");
			printf("\n정답을 맞추었습니다!\n");
			printf("남은 기회는 %d번 이었습니다! 축하합니다.\n",chance);
			printf("\n--------------------------------------\n");
			break;
		}
		if (chance == 0) {
			printf("\n--------------------------------------\n");
			printf("\n정답은 %d이었습니다.\n",number);
			printf("남은 기회가 없습니다. 다시 시도하세요\n");
			printf("\n--------------------------------------\n");
			break;
		}
	}
}
