#include <stdio.h>

void main(void)
{
	//공간 하나당 4바이트씩 차이
	int arr[4];
	printf("arr[0]방의 주소 %p\n", &arr[0]);
	printf("arr 배열의 시작 주소 %p\n", arr);
	printf("arr[1]방의 주소 %p\n", &arr[0]);

	//공간 하나당 1바이트씩 차이
	char str[4];
	printf("str[0]방의 주소 %p\n", &str[0]);
	printf("str 배열의 시작 주소 %p\n", str);
	printf("str[0]방의 주소 %p\n", &str[1]);
}