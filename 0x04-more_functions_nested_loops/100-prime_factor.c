#include <stdio.h>

/**
 * main - program that finds and prints the largest prime factor
 * number 612852475143
 * Return: (0)
 */

int main(void)
{
	long int i, n, d;

	n = 612852475143;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == 1)
			{
				printf("%ld\n", i);
				break;
			}
			d = n / i;
			n = d;
		}
	}
	return (0);
}
