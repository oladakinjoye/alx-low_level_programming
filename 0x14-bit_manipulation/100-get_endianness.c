#include "main.h"

/**
 * get_endianness - check if a machine is little or big endian
 * Return: returns 0 for big, returns 1 for little
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
