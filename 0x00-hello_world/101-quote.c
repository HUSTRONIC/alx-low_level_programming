#include <stdio.h>
#include <unistd.h>

/**
 * main – print output of Dora’s quote
 *
 * Description: program that displays Dora’s quote for the programe
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
