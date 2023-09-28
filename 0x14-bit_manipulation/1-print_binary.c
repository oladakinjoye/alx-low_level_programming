#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal num
 * @n: num to print in binary
 */
void print_binary(unsigned long int n)
{
	int k, counter = 0;
	unsigned long int cur;

	for (k = 63; k >= 0; k--)
	{
		cur = n >> k;

		if (cur & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
