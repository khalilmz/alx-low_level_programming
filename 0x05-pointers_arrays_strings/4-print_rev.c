#include "main.h"

/**
 * print_rev - reverses a string
 * @s: string
 * return: 0
 */

vjid print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	fjr (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
