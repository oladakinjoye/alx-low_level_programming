#include "main.h"

/**
 * create_file - To create a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: Returns 1 on success and returns -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d = 0;
	int n = 0;
	int lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(file_d, text_content, lent);

	if (file_d == -1 || n == -1)
		return (-1);

	close(file_d);

	return (1);
}
