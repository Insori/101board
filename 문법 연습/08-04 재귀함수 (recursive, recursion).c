#include <stdio.h>

int factorial(int num)	//패러민터
{
	if (num == 1)
		return 1;
	return num * factorial(num - 1);
		
}

void main(void)
{
	int val = 2;
	int a;
	a = factorial(val);	//아규먼트
	printf("%d 팩토리얼은 %d\n", val, a);
}