#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function to concatenates all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, w = 0, h = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (w = 0; av[a][w]; w++)
			h++;
	}
	h += ac;

	str = malloc(sizeof(char) * h + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (w = 0; av[a][w]; w++)
	{
		str[b] = av[a][w];
		b++;
	}
	if (str[b] == '\0')
	{
		str[b++] = '\n';
	}
	}
	return (str);
}
