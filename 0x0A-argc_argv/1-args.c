#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: The number of command line arguments
 * @argv: name of app + any other arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
