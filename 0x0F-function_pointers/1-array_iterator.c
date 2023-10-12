#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function
 * @size: size of the array
 * @action: pointer to the function to use
 * @array: array to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
