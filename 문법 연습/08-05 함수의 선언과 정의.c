#include <stdio.h>

//�Լ��� ����(difinition)
int sum(int a, int b)
{
	return a + b;
}

void main(void)
{
	int c = sum(1, 2);
	printf("%d", c);
}