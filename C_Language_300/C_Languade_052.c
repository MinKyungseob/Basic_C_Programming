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

	//���� ��µǰ� �ִ� ���� ���� ���� ù ��°�� �̵�
	putch('\r');		//ĳ���� ����
	putch('\m');		//���� ����

	return len;
}