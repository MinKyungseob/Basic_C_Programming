#include<stdio.h>

int main() {
	int i = 0;
	int j = 1;

	printf("�� = %d, �޸� �ּ� = %p \n", i, &i);		//�� =0, �޸��ּ� =0012FF7C
	printf("�� = %d, �޸� �ּ� = %p \n", j, &j);		//�� =1, �޸��ּ� =0012FF78

	return 0;
}
