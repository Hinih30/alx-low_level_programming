#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: Character to be checked
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
