#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that takes first two integer arguments and prints the product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i;
	int k;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		k = 1;

		for (i = 1; i < 3; i++)
			k *= atoi(argv[i]);

		printf("%d\n", k);
	}

	return (0);
}
