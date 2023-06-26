#include "main.h"

/**
 * swap_int - reset a int value to 98.
 * @a: first points to be swaped
 * @b: seconde points to be swapped
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;

	*a = *b;
	*b = t;
}
