#include "main.h"

/**
 * clear_bit - sets the value of a given bit to zero (0)
 * @n: pointer to the num to change
 * @index: index of the bit to clear
 *
 * Return: returns 1 for success, returns  -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

