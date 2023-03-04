#include<stdio.h>

int main() {
	int x = 4;
	int y = 2;
	int z;

	z = x + y;					//6
	z = x - y;					//2
	z = x * y;					//8
	z = x / y;					//2
	z = (x + y) * (x - y);		//12
	z = (x * y) + (x / y);		//10
	z = x + y + 2004;			//2010
	z = 2004 - x - y;			//1998


	return 0;
}
