#include "main.h"

/**
* more_numbers - prints from 0 to 9 without 2 and 4
*/

void more_numbers(void)
{
	int i;

	int j;

	int k;

	for (i = 0; i <= 10; i++)
	{
	for (j = 48; j <= 57; j++)
	{
	_putchar(j);
	if (j == 57)
	{
	for (k = 48; k <= 52; k++)
	{
	_putchar('1');
	_putchar(k);
	}
	}
	}
	_putchar('\n');
	}
}
