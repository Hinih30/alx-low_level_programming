#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int r);

/**
 * _sqrt_recursion - Function to return natural square root of a number
 * @n: number to calculate the square roo
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root
 * @r: iterator
 *
 * Return: Always 0
 */
int actual_sqrt_recursion(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (actual_sqrt_recursion(n, r + 1));
}
