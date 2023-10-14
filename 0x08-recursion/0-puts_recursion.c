#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a string followed by a new line
 * @c: string to be printed
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
