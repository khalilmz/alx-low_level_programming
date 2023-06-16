#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
	{
		putchar(word);
	}
	putchar('\n');
	return (0);
}
