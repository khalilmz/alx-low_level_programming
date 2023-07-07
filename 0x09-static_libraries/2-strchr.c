#include "main.h"
/**
 * _strchr - returns a point to the first occurance of a character in a string
 * @s: string to search for the character in.
 * @c: char to the search for.
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
