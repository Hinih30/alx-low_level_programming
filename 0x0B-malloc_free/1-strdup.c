#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Duplicates a string in memory.
 * @str: The input string to be duplicated.
 *
 * Return: A pointer to the newly allocated duplicated string,
 *         or NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *ade;

	if (str == NULL)
	{
		return (NULL);
	}

	ade = malloc(strlen(str) + 1);
	if (ade == NULL)
	{
		return (NULL);
	}
	strcpy(ade, str);

	return (ade);
}
