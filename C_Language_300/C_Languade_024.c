#include<stdio.h>

int main() {
	int x = 1;

	printf("x=%d\n", x++);	//x=1이 출력, 이후 1 증가
	printf("x=%d\n", x++);	//x=2가 출력, 이후 1 증가
	printf("x=%d\n", ++x);	//1이 먼저 증가, x=4 출력
	printf("x=%d\n", x--);	//x=4가 출력. 이후 1 감소
	printf("x=%d\n", x--);	//x=3이 출력, 이후 1 감소
	printf("x=%d\n", --x);	//1이 먼저 감소, x=1 출력
	return 0;
}
