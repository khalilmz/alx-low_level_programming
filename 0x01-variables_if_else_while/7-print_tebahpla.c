#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

