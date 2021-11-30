#include <stdio.h>

typedef struct {	//구조체는 무조건 전역으로 선언
	int x;	
	int y;
	//8byte
}Point;

void main(void)
{
	//선언과 동시에 초기화
	Point p1 = { 10,20 };	//p1.x는 10, p1.y는 20
	
	Point p2;
	p2.x = 20;
	p2.y = 40;

	printf("(%d, %d)\n", p1.x, p1.y);
	printf("(%d, %d)\n", p2.x, p2.y);
	printf("구조체의 크기는 %d\n", sizeof(Point));
}