#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - program that creates a file.
 * @filename: variable pointer to the file to be modified
 * @text_content: the required text file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int z = 0, opn_fle;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[z] != '\0')
	{
		z++;
	}

	opn_fle = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (opn_fle == -1)
		return (-1);

	write(opn_fle, text_content, z);

	return (1);
}
