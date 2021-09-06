#include <stdio.h>

void main(void)
{
	char str[20] = "Hello World";

	//단순하게 인덱스 값을 직접 계산함
	for (int i = 0; i <= 11; i++)
		printf("%c", str[i]);
	
}