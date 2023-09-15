#include <stdio.h>

/**
 * main - program that finds and prints the largest prime factor
 * of the number 612852475143
 * Return: (0)
 */

int main(void)
{
		long n = 612852475143;
		long largestPrime = 0;
		long i;

		for (i = 2; i <= n;)
		{
			if (n % i == 0)
			{
				n /= i;
				largestPrime = i;
			}
			else
			{
				i++;
			}
		}
	printf("%ld\n", largestPrime);
	return (0);
}
