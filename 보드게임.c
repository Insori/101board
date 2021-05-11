/* 
*	보드게임
*	총 60칸
*	플레이의 속성
*		1.돈 : 2000000000 시작
*		2.현재 위치 : 0부터 시작
*		3.황금열쇠
*			원하는 곳 갈 수 있음
*			돈을 랜덤으로 준다( -5억 ~ +5억)
*			TODO : 돈을 뺏는다
*	주사위 1~6
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	//플레이어의 위치(0부터 시작)
	int position = 0;
	//주사위
	int dice;

	srand(time(0));
	printf("현재위치 : %d\n\n", position);
	
	//주사위는 1~6까지 나오게 설정
	dice = rand() % 6 + 1;
	printf("주사위를 던져서 %d가 나왔습니다.\n", dice);
	
	//던진 주사위값을 현재 위치에 적용
	position += dice;
	printf("현재위치 : %d\n\n", position);

	//무한반복
	while (1) 
	{
		//엔터키를 눌러서 진행시켜
		getchar();

		/*던짐*/
		//주사위는 1~6까지 나오게 설정
		dice = rand() % 6 + 1;
		printf("주사위를 던져서 %d가 나왔습니다.\n", dice);

		//던진 주사위값을 현재 위치에 적용
		position += dice;
		printf("현재위치 : %d\n\n", position);

		if (position > 60)
		{
			printf("퇴근시간입니다. 안녕히가십시오.\n");
		}
		
	}

	
}