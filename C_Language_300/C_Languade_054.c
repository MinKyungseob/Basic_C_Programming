#include<stdio.h>

void main(void) 
{
	int i = 100;
	int j = 1000;
	int k = 12345;

	//정렬을 사용하지 않는 이유
	printf("[%d]\n", i);				//[100]
	printf("[%d]\n", j);				//[1000]
	printf("[%d]\n", k);				//[12345]

	//출력을 5자리 설정
	printf("[%5d]\n", i);				//[  100]
	printf("[%5d]\n", j);				//[ 1000]
	printf("[%5d]\n", k);				//[12345]
}