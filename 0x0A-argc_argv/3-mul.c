#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name
 * @argc: The number of command line arguments
 * @argv: name of app + any other arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum;
	
	sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
	return (0);
	}
}
