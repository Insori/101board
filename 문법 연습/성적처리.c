#include <stdio.h>

//�Է¹��� ������ ���� ����� ���
void cal_grade(int score)
{
	if (90 <= score && score <= 100)
		printf("A");
	else if (80 <= score && score < 90)
		printf("B");
	else if (70 <= score && score < 80)
		printf("C");
	else if (score < 70)
		printf("D");

	printf("\n");
}
void main(void)
{
	int C_score;
	printf("C��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &C_score);
	cal_grade(C_score);

	
	int Java_score;
	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &Java_score);
	cal_grade(Java_score);
	

	int Com_score;
	printf("��ǻ�ͱ��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &Com_score);
	cal_grade(Com_score);
	
}