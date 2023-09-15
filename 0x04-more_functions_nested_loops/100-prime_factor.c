#include <stdio.h>

/**
 * main - program that finds and prints the largest prime factor
 * of the number 612852475143
 * Return: (0)
 */

int main(void)
{
		long long n = 612852475143;
		long long largestPrime = 0;

		for (long long i = 2; i <= n;)
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
	printf("%lld\n", largestPrime);
	return (0);
}
