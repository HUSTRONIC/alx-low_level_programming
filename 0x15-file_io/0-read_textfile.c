#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: the required file variable pointer
 * @letters: size letters
 * Return: success, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_op, let_rd, f_wrt;
	char *ptr_text;

	ptr_text = malloc(letters);
	if (ptr_text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	f_op = open(filename, O_RDONLY);

	if (f_op == -1)
	{
		free(ptr_text);
		return (0);
	}

	let_rd = read(f_op, ptr_text, letters);

	f_wrt = write(STDOUT_FILENO, ptr_text, let_rd);

	close(f_op);

	return (f_wrt);
}
