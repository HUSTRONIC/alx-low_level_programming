#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of aggumrnts
 * @argv: Array name
 * Return: 1 (success), 0 otherwise
 */

int main(int argc, char *argv[])
{
	int r;
	int j;
	int len;
	int sum;
	char *arg;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (r = 1; r < argc; r++)
		{
			arg = argv[r];
			len = strlen(arg);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(arg + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[r]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
