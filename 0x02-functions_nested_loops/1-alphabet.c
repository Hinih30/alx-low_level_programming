#include "main.h"

/**
 * print_alphabet - A function that print alphabet in lowercase
 * Return:0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
