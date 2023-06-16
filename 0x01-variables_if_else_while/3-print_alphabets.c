#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
	{
		putchar(word);
	}
	for (word = 'A'; word <= 'Z'; word++)
	{
		putchar(word);
	}
	putchar('\n');
	return (0);
}

