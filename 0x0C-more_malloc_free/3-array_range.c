#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Function create and array of integers.
 * @min: starting number.
 * @max: ending number.
 *
 * Return: pointer to the area in memory.
 */
int *array_range(int min, int max)
{
	int *array;
	int b;

	if (min > max)
		return (NULL);
	b = max - min;

	array = malloc(sizeof(int) * (b + 1));
	if (!array)
		return (NULL);
	while (max > min)
	{
		array[b] = max;
		b--;
		max--;
	}
	array[b] = min;
	return (array);
}
