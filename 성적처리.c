#include<stdio.h>

void cal_grade(int score);
float average(int a, int b, int c);

void main(void)
{
    float avg;  //���
    int subject[3]; //����
    printf("����� ������ �Է��Ͻÿ� : ");
    scanf_s("%d", &subject[0]);
    cal_grade(subject[0]);

    printf("�ڹ� ������ �Է��Ͻÿ� : ");
    scanf_s("%d", &subject[1]);
    cal_grade(subject[1]);

    printf("��ǻ�ͱ��� ������ �Է��Ͻÿ� : ");
    scanf_s("%d", &subject[2]);
    cal_grade(subject[2]);

    avg = average(subject[0], subject[1], subject[2]);
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
