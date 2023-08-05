#include "main.h"

/**
 * _strstr - Function that locate a substring
 * @haystack: input
 * @needle: input
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *f = needle;

		while (*t == *f && *f != '\0')
		{
			t++;
			f++;
		}

		if (*f == '\0')
			return (haystack);
	}

	return (0);
}
