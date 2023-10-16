#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns natural square root of number
 * actual_sqrt_recursion - natural square root of a number
 * @n: number to calculate
 * @r: iterator
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n, int r)

{

	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (actual_sqrt_recursion(n, r + 1));
}
