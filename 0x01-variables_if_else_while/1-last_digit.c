#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main -it prints out output of the last digit
*
* Return: always (0)
*
*/
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	printf("las digit of %d is %d and is ", n, m);
	if (m > 5)
		printf("greater than 5\n");
	else if (m == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
