#include <stdio.h>
/**
* main -it prints all possible different combinations
*
* Return: always (0)
*
*/
int main(void)
{
	int i = 0;
	int j;

	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{

			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;

	}
	putchar('\n');
	return (0);

}
