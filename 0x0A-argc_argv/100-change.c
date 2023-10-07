#include <stdio.h>

#include <stdlib.h>

#include "main.h"


/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments to the array
 * @argv: array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */

int main(int argc, char *argv[])

{
	int n;
	int j;
	int change;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	change = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && n >= 0; j++)
	{
		while (n >= coins[j])
		{
			change++;
			n -= coins[j];
		}
	}
	printf("%d\n", change);
	return (0);
}
