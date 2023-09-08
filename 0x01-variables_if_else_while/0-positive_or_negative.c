#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -it prints out output that assigns a random number to a variable
*
* Return: always (0)
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
If(n < 0)
{
	Printf(“ %d is %s\n”, n, “negative”);
}
else If(n > 0)
{
	Printf(“ %d is %s\n”, n, “positive”);
}
else
{
	Printf(“ %d is %s\n”, n, “zero”);
}

	return (0);
}

