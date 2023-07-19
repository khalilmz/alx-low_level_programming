#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - fuction execute a fuction.
 * @array: array to interate through.
 * @size: size of the array.
 * @action: the fuction to execute array and size on.
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
