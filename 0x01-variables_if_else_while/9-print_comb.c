#include <stdio.h>
/**
* main -it prints all possible combinations
*
* Return: always (0)
*
*/
int main(vopid)
{
	int n;
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
