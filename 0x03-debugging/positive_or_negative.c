#include "main.h"
/**
 * positive_or_negative - Entry point
 * @i: first integer
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{

	if (i == 0)
		printf("%d is zero\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}