#include <stdio.h>

/**
 * main -  program that finds and prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	int limit = 4000000;
	int term1 = 1;
	int term1 = 2;
	int next;
	int sum = 2;

	while (next <= limit)
	{
		next = term1 + term2;
		if (next % 2 == 0)
			sum = sum + next;
		term1 = term2;
		term2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
