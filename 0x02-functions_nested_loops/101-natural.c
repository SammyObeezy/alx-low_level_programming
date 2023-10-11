#include <stdio.h>
/**
 * main - function to run multiples of 3 0r 5 in numbers below 10224
 * Return:0
 */
int main(void)
{
	int sum = 0;
	int i;
	for (i = 0 ; i< 1024 ; i++)
	{
		if (i %3 == 0 || i % 5 == 0)
			sum = sum + 1;
	}
	printf("%d\n", sum);
	return(0);
}
