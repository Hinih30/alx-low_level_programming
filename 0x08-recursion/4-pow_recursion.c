#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - funtion that returns the value of x raised to y
 * @x: value to return
 * @y: power to raise
 *
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
