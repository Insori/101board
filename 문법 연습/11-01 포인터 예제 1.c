#include <stdio.h>

void main(void)
{

	int num = 3;
	int* ptr = &num;
	printf("%num안에 들어있는 값 %d\n", num);
	printf("%num안에 들어있는 값 %d\n", &num);
	printf("%num안에 들어있는 값 %d\n", ptr);
}