#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//정적할당 (a, ptr1은 지역변수이므로 stack 영역에 할당)
	int a = 3;
	int* ptr1 = &a;
	*ptr1 = 4;
	printf("%d \n", *ptr1);

	//동적할당 (malloc으로 할당된 공간은 heap 영역에 할당)
	//다만 지역변수 ptr2는 stack 영역에 할당
	int* ptr2 = (int*)malloc(sizeof(int));
	*ptr2 = 10;
	printf("%d \n", *ptr2);
	free(ptr2);
}