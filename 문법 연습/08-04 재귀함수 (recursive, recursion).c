#include <stdio.h>

int factorial(int num)	//�з�����
{
	if (num == 1)
		return 1;
	return num * factorial(num - 1);
		
}

void main(void)
{
	int val = 2;
	int a;
	a = factorial(val);	//�ƱԸ�Ʈ
	printf("%d ���丮���� %d\n", val, a);
}