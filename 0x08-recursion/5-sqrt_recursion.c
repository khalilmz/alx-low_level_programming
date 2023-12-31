#include "main.h"

int support_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (support_sqrt_recursion(n, 0));
}

/**
 * support_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @j: iterator
 *
 * Return: the resulting square root
 */
int support_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (support_sqrt_recursion(n, j + 1));
}
