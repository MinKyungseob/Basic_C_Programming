#include<stdio.h>

#define	PI	3.141592

const	double	j = 1.23456789;

int main() {
	PI = 3.141592;			//���� �߻�
	j = 1.23456789;;		//���� �߻�

	printf("�Ǽ��� ���� PI�� ���� %f \n", PI);
	printf("�Ǽ��� ���� j�� ���� %f \n", j);

	return 0;
}
