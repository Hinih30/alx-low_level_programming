#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name
 * @name: string to print
 * @f: pointer to the printing function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
