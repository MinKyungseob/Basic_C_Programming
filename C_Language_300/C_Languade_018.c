#include<stdio.h>

#define	PI	3.141592

const	double	j = 1.23456789;

int main() {
	PI = 3.141592;			//에러 발생
	j = 1.23456789;;		//에러 발생

	printf("실수형 변수 PI의 값은 %f \n", PI);
	printf("실수형 변수 j의 값은 %f \n", j);

	return 0;
}
