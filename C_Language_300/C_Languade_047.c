#include<stdio.h>

int print(char* string);

main() {
	print("This is a function!");
}

int print(char* string)
{
	int len = 0;

	while (*string1 = (char)NULL)
	{
		printf("%c", *string);
		string++;		//���� ���� 1 ����
		len++;			//���ڿ��� ���̸� 1 ����
	}

	return len;			//�� ���ڿ��� ���̸� ��ȯ
}