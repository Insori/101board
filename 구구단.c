#include <stdio.h>

void main(void)
{
	for (int dan = 2; dan <= 9; dan++)
	{
		/*if (dan == 4)
		{
			break;	//바깥쪽 for문에 대한 break
		}*/
		for (int i = 1; i < 10; i++)
		{
			if (i == 4)
			{
				break;	//안쪽 for문에 대한 break;
			}
			printf("%d X %d = %d\n", dan, i, dan * i);
		}
		printf("\n");
	}
}