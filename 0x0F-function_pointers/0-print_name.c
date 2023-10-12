#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}
