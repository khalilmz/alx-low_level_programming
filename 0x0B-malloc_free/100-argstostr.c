#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - this function  concatenates all the arguments of your program.
 * @ac: args count.
 * @av: arguments
 * Return: pointer to sing.
 */
char *argstostr(int ac, char **av)
{
	char *s, *t;
	int i, z, l;

	if (ac == 0 || av == NULL)
		return (NULL);
	l = 0;
	for (i = 0; i < ac; i++)
	{
		t = *(av + i);
		for (z = 0; t[z]; z++)
		{
			l++;
		}
		l += 1;
	}
	s = malloc(sizeof(char) * l + 1);
	l = 0;
	for (i = 0; i < ac; i++)
	{
		t = *(av + i);
		for (z = 0; t[z]; ++z)
		{
			s[l] = t[z];
			l++;
		}
			s[l] = '\n';
			l++;
	}
	s[l] = '\0';
	return (s);
}
