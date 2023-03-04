#include<stdio.h>

int main() {
	char i;
	int j;
	double k;

	printf("%d \n", sizeod(i));		//1
	printf("%d \n", sizeod(j));		//4 (64비트 컴퓨터에서는 8)
	printf("%d \n", sizeod(k));		//8

	return 0;
}
