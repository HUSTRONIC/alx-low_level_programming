#include "main.h"

int actual_sqrt_recursion(int n);

/**
 * _sqrt_recursion - function that returns the natural 
 * square root of a number
 * @n: number to be used to calculate the square
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt_recursion(n, 0));
	}
}

/**
 * actual_sqrt_recursion - recurses to find the actual
 * natural square of the number
 * @n: number to calculate the root
 * @i: iterator
 * Return: actual sqaure root
 */

int actual_sqrt_recursion(int n)
{
	if (i * i > i)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
