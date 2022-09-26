#include "main.h"
#include <string.h>

/**
 * _strchr - search char and string
 * @s: source
 * @c: character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		if (c == s[i])
		{
			return (s[i]);
		}
		else
		{
			continue;
		}
	}
	return (NULL);
}
