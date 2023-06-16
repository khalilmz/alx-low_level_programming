#include <stdio.h>

/**
 * main - Print all the letters in lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
	{
	if (word != 'q' && word != 'e')
	{
		putchar(word);
	}
	}
	putchar('\n');
	return (0);
}
