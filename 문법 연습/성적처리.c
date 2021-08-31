#include <stdio.h>

//입력받은 점수에 대한 등급을 출력
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
	printf("C언어 점수를 입력하시오 : ");
	scanf("%d", &C_score);
	cal_grade(C_score);

	
	int Java_score;
	printf("자바 점수를 입력하시오 : ");
	scanf("%d", &Java_score);
	cal_grade(Java_score);
	

	int Com_score;
	printf("컴퓨터구조 점수를 입력하시오 : ");
	scanf("%d", &Com_score);
	cal_grade(Com_score);
	
}