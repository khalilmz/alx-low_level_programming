#include "main.h"

/**
 * print_square - print a square to a given size.
 * @size: size square to print
 *
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = size ; i > 0 ; i--)
	{
		for (j = size ; j > 0 ; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
