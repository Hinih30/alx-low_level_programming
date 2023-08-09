#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *sss;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	sss = malloc(sizeof(char) * (x + 1));

	if (sss == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		sss[y] = str[y];

	return (sss);
}
