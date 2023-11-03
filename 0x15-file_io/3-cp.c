#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
* main - The program which copies the content
* of a file to another file
* @argc: The required number of argument
* @argv: function parameters
* Return: 0
*/
int main(int argc, char *argv[])
{
	int str_f_file, end_f_file;
	int fst = 1024;
	char f[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	str_f_file = open(argv[1], O_RDONLY);
	if (str_f_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
		}
	end_f_file = open(argv[2], O_WRONLY | O_CREAT
	| O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (end_f_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(str_f_file);
		exit(99);
	}
	while (fst == 1024)
	{
		fst = read(str_f_file, f, 1024);
		if (fst == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(str_f_file);
			close(end_f_file);
			exit(98);
		}

		if (write(end_f_file, f, fst) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(str_f_file);
			close(end_f_file);
			exit(99);
		}
	}
	if (close(str_f_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", str_f_file);
		exit(100);
	}
	if (close(end_f_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", end_f_file);
		exit(100);
	}
	return (0);
}

