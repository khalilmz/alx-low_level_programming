#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
* Return: line
*/

void print_diagonal(int n)
{
	int i;

	int j;

	if (n < 1)
	{
	_putchar('\n');
	}

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
	j = i;
	while (j > 0)
	{
	_putchar(32);
	j--;
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
