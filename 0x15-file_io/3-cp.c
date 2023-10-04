
#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_buffer(char *file);
void close_file(int file_d);


/**
 * create_buffer - Allocate 1024 bytes for a buffer.
 * @file: The name of the file associated with the buffer.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - This function closes the given file descriptor
 * @file_d: The file descriptor to be closed.
 * Description: This function closes the given file descriptor
 */
void close_file(int file_d)
{
	int cl;

	cl = close(file_d);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file.
 * @argc: the number of arguments inputted to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: returns 0 on success.
 * If the argument count is incorrect, returns 97.
 * If file_from does not exist or cannot be read, returns 98.
 * If file_to cannot be created or written, returns 99.
 * If file_to or file_from cannot be closed, returns  100.
 *
 */
int main(int argc, char *argv[])
{
	int frm, to, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rd = read(frm, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(to, buff, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(frm, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	close_file(frm);
	close_file(to);

	return (0);
}
