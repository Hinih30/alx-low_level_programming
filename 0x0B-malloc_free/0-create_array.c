#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it
 * with a specific character.
 * @size: the size of the array to create.
 * @c: the character to initialize the array elements with.
 *
 * Return: a pointer to the newly created array,
 * or NULL if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{

	/* Handle memory allocation failure. */
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		str[x] = c;
	}
	return (str);
}
