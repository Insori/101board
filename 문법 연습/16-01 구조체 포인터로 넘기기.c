#include <stdio.h>

typedef struct {
	int x;
	int y;
}Point;

void main(void)
{
	Point* ptr = (Point*)malloc(sizeof(Point));
	ptr->x = 3;
	ptr->y = 4;

	////����ü���� ��������
//	printf("%d %d\n", a.x,a.y);

	//�����͸� ���� ��������
	printf("%d %d\n", (*ptr).x, (*ptr).y);	//������ �켱���� ������ ��ȣ ����� ��
	//���� ����� ���ŷο�Ƿ� (*ptr).�� ptr->�� �ٲ���
	printf("%d %d\n", ptr->x, ptr->y);
}