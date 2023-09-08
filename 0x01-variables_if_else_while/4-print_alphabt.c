#include <stdio.h>
/**
* main -it prints out output using put
*
* Return: always (0)
*
*/
int main(void)
{
	int n =97;

	while (n <=122)
	{
		if (n == 101 ||  n == 113)
		{
				n++;
				continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
