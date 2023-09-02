#include "main.h"
#include <stdio.h>
/**
 * main - print all the arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always returns zero
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc ; k++)
	{
	printf("%s\n", argv[k]);
	}

	return (0);
}
