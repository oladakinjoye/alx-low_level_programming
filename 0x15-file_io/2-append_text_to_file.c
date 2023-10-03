#include "main.h"

/**
 * append_text_to_file - append text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: String to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL returns -1.
 *         If the file not exist and the user lacks write permissions -1.
 *         If the file exist returns 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn = 0;
	int wr = 0;
	int lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wr = write(opn, text_content, lent);

	if (opn == -1 || wr == -1)
		return (-1);

	close(opn);

	return (1);
}
