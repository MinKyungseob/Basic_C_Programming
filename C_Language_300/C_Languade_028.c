#include<stdio.h>

int main() {
	int x = 1, y = 2, max;

	max = x > y ? x : y;

	print("max=%d, x=%d, y=%d", max, x, y);

	return 0;
}
