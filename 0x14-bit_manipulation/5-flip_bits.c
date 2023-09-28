#include "main.h"

/**
 * flip_bits - counts the num of bits to change
 * to get from one num to another
 * @n: first num
 * @m: second num
 *
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int counter = 0;
	unsigned long int cur;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = exclusive >> i;
		if (cur & 1)
			counter++;
	}

	return (counter);
}
