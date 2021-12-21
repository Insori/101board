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

	////구조체에서 직접접근
//	printf("%d %d\n", a.x,a.y);

	//포인터를 통한 간접접근
	printf("%d %d\n", (*ptr).x, (*ptr).y);	//연산자 우선순위 때문에 괄호 해줘야 됨
	//위에 방식이 번거로우므로 (*ptr).을 ptr->로 바꿔줌
	printf("%d %d\n", ptr->x, ptr->y);
}