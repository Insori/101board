#include <stdio.h>

void main(void)
{
	int C_score;
	printf("C��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &C_score);
	
	
	if (90 <= C_score && C_score <= 100)
		printf("A");
	else if (80 <= C_score && C_score < 90)
		printf("B");
	else if (70 <= C_score && C_score < 80)
		printf("C");
	else if (C_score < 70)
		printf("D");
	
	printf("\n");

	
	int Java_score;
	printf("�ڹ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &Java_score);

	if (90 <= Java_score && Java_score <= 100)
		printf("A");
	else if (80 <= Java_score && Java_score < 90)
		printf("B");
	else if (70 <= Java_score && Java_score < 80)
		printf("C");
	else if (Java_score < 70)
		printf("D");
	
	printf("\n");


	int Com_score;
	printf("��ǻ�ͱ��� ������ �Է��Ͻÿ� : ");
	scanf("%d", &Com_score);

	if (90 <= Com_score && Com_score <= 100)
		printf("A");
	else if (80 <= Com_score && Com_score < 90)
		printf("B");
	else if (70 <= Com_score && Com_score < 80)
		printf("C");
	else if (Com_score < 70)
		printf("D");

	printf("\n");
	
}