#include<stdio.h>

int main() {
	int x = 5;
	int y = 2;

	if (x > 0 && x < 10)
	{
		printf("0 > x< 10 \n");
	}
	
	if (x < || y == 2)
	{
		printf("x가 보다 작거나, y는 2 입니다. \n");
	}

	if (!(x > y))
	{
		printf("x가 y보다 크지 않습니다.\n");
	}

	return 0;
}
