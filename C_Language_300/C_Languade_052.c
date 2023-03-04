#include<stdio.h>
#include<conio.h>

int print(char* string);

void main(void)
{
	print("This is a putch funtion!");
}

int print(char* string)
{
	int len = 0;

	while (*string != (char)NULL)
	{
		putch(*string);
		string++;
		len++;
	}

	//현재 출력되고 있는 줄을 다음 줄의 첫 번째로 이동
	putch('\r');		//캐리지 리턴
	putch('\m');		//라인 리턴

	return len;
}