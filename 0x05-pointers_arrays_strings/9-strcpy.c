#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - A function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @src: copy from
 * @dest: copy to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y < x ; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';
	return (dest);
}
