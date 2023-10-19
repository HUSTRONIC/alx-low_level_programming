#include <stdio.h>

void fst_prnt_this(void) __attribute__ ((constructor));

/**
 * fst_prnt_this - function that prints a statement before the main.
 */
void fst_prnt_this(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

