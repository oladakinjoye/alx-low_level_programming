#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file print to STDOUT.
 * @filename: text files being read
 * @letters: num of letters to be read
 * Return: n - actual num of bytes read and printed
 * returns 0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t file_d;
	ssize_t n;
	ssize_t tk;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	tk = read(file_d, buff, letters);
	n = write(STDOUT_FILENO, buff, tk);

	free(buff);
	close(file_d);
	return (n);
}

