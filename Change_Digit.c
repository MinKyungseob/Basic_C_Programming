//numbers under 512, change 10 digit nums into other digit way, like decimal number to binary number
#include<stdio.h>

int main() {
	int num, times, sum = 0;
	scanf_s("%d", &num);
	if (num >= 512)
		return printf("512 이상 입력. 범위를 벗어났습니다.\n Range over 512 "); //Korean: number is over 512, it's out of range
	scanf_s("%d", &times);
	int digit = 10;
	for (int i = 0; i <= 10; i++)
	{
		sum += (num % times)* digit;
		num = num / times;
		digit *= 10;
		if (num == 0)
			break;
	}
	sum = sum / 10;
	printf("%d", sum);
}
