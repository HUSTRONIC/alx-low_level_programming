#include <stdio.h>
/**
* main -it prints number in reverse
*
* Return: always (0)
*
*/
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	printf('\n');
	return (0);
}
