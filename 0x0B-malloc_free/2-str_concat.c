#include "main.h"
#include <stdlib.h>
/**
 * str_concat - this function concatenates two strings.
 * @s1: string 1/2 to concat.
 * @s2: string 2/2 to concat.
 *
 * Return: Pointer to concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	s = malloc(sizeof(char) * (i + ci + 1));

	if (s == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		s[i] = s2[ci];
		i++, ci++;
	}
	s[i] = '\0';
	return (s);
}
