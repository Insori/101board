#include <stdio.h>

void main(void)
{
	//���� �ϳ��� 4����Ʈ�� ����
	int arr[4];
	printf("arr[0]���� �ּ� %p\n", &arr[0]);
	printf("arr �迭�� ���� �ּ� %p\n", arr);
	printf("arr[1]���� �ּ� %p\n", &arr[0]);

	//���� �ϳ��� 1����Ʈ�� ����
	char str[4];
	printf("str[0]���� �ּ� %p\n", &str[0]);
	printf("str �迭�� ���� �ּ� %p\n", str);
	printf("str[0]���� �ּ� %p\n", &str[1]);
}