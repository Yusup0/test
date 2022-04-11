#include <stdio.h>

int my_pow(int a, int b);

int main(void)
{
	printf("result: %d\n", my_pow(8, 16));
	return 0;
}

int my_pow(int a, int b) {
	return (a * b);
}
