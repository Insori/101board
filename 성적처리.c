#include<stdio.h>

void cal_grade(int score);
float average(int a, int b, int c);

void main(void)
{
    float avg;
    int C_score, java_score, CA_score;
    printf("����� ������ �Է��Ͻÿ� : ");
    scanf_s("%d", &C_score);
    cal_grade(C_score);

    printf("�ڹ� ������ �Է��Ͻÿ� : ");
    scanf_s("%d", &java_score);
    cal_grade(java_score);

    printf("��ǻ�ͱ��� ������ �Է��Ͻÿ� : ");
    scanf_s("%d", &CA_score);
    cal_grade(CA_score);

    avg = average(C_score, java_score, CA_score);
    printf("�� ������ ����� %f�Դϴ�.\n", avg);
}

// �Է¹��� ������ ���� ����� ���
void cal_grade(int score)
{
    if (score >= 90 && score <= 100)
        printf("A\n");
    else if (score >= 80)
        printf("B\n");
    else if (score >= 70)
        printf("C\n");
    else if (score >= 60)
        printf("D\n");
    else
        printf("E\n");
}

//�� ������ ����� ��ȯ
float average(int a, int b, int c)
{
    return (a + b + c) / 3.f;
}
