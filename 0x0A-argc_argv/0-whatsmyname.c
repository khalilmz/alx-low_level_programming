#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: The number of command line arguments
 * @argv: name of app + any other arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
