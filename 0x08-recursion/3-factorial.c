#include <stdio.h>
#include "main.h"

/**
 * factorial - funtion that returns a factorial of a given number
 * @n: factorial number
 *
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
