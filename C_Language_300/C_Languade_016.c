#include<stdio.h>

#define HUNDRED 100

const char	j = 10;

int main() {
	HUNDRED = 200;		//���� �߻�
	j = 200;			//���� �߻�

	printf("������ ��� HUNDRED�� ���� %d \n", HUNDRED);
	printf("������ ��� j�� ���� %d \n", j);

	return 0;
}
