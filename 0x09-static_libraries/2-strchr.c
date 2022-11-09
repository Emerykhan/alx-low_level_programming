#include "main.h"
#include <stddef.h>

/**
 * _strchr - string character
 * @s: string we look through
 * @c: the character we look for
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
