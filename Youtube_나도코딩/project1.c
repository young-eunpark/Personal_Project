#include <stdio.h>

// 프로젝트
// 경찰관이 범죄자의 정보를 입수(조서작성)
// 이름? 나이? 몸무게? 키? 범죄명?
// 유튜브 나도코딩 - C언어 무료 강의(입문부터 게임 개발까지)
// https://www.youtube.com/watch?v=q6fPjQAzll8
// 이것은 개인이 작성한 코드이며 영상의 정답과 다를 수 있습니다.
int main() {
	char name[50];
	int age;
	float weight;
	float height;
	char crime[200];

	printf("이름 : ");
	scanf_s("%s", name,sizeof(name));
	printf("나이 : ");
	scanf_s("%d", &age);
	printf("몸무게 : ");
	scanf_s("%f", &weight);
	printf("키 : ");
	scanf_s("%f", &height);
	printf("범죄명 : ");
	scanf_s("%s", crime,sizeof(crime));

	printf("\n----- 조서 -----\n");
	printf("이름 : %s\n나이 : %d\n몸무게 : %.2f\n키 : %.2f\n범죄명 : %s\n",name,age,weight,height,crime);

	return 0;
}
