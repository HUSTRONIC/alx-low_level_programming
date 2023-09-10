#include <stdio.h>
/**
* main -it prints out output using put
*
* Return: always (0)
*
*/
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (num1 != num2)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
				if (num1 != 99 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}


	}
	putchar('\n');
	return (0);
}
