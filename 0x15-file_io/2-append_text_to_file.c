#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - The program that appends
 * text at the end of a file
 * @filename: the required variable pointer to the file
 * @text_content: the required text file.
 * Return: 1 for success, else -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int m = 0, opn_fl;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[m] != '\0')
	{
		m++;
	}

	opn_fl = open(filename, O_WRONLY | O_APPEND);

	if (opn_fl == -1)
		return (-1);

	write(opn_fl, text_content, m);

	return (1);
}
