#include "main.h"

/**
 * puts2 - A function that prints every other character of a string
 * starting with the first character, followed by new line
 * @str: string
 * Return: string character
 */
void puts2(char *str)
{
	int longi = 0;
	int a = 0;
	char *b = str;
	int c;

	while (*b != '\0')
	{
		b++;
		longi++;
	}
	a = longi - 1;
	for (c = 0 ; c <= a ; c++)
	{
		if (c % 2 == 0)
	{
		_putchar(str[c]);
	}
	}
	_putchar('\n');
}
