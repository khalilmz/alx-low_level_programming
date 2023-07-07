#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: haystack.
 * @accept: needle.
 *
 * Return: pointer to to byte s that matches one of the byes in accept,or NULL
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
