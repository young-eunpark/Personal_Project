#include <stdio.h>

// ������Ʈ
// �������� �������� ������ �Լ�(�����ۼ�)
// �̸�? ����? ������? Ű? ���˸�?
// ��Ʃ�� �����ڵ� - C��� ���� ����(�Թ����� ���� ���߱���)
// https://www.youtube.com/watch?v=q6fPjQAzll8
int main() {
	char name[50];
	int age;
	float weight;
	float height;
	char crime[200];

	printf("�̸� : ");
	scanf_s("%s", name,sizeof(name));
	printf("���� : ");
	scanf_s("%d", &age);
	printf("������ : ");
	scanf_s("%f", &weight);
	printf("Ű : ");
	scanf_s("%f", &height);
	printf("���˸� : ");
	scanf_s("%s", crime,sizeof(crime));

	printf("\n----- ���� -----\n");
	printf("�̸� : %s\n���� : %d\n������ : %.2f\nŰ : %.2f\n���˸� : %s\n",name,age,weight,height,crime);

	return 0;
}