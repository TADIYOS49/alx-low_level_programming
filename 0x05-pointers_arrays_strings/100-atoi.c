#include <string.h>
#include "main.h"


/**
 * _atoi - string to integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int len = strlen(s);
	int i, num;

	for (i = 1; i < len; i++)
	{
		num = num * 10 + s[i];
	}
	if (s[0] == '-')
	{
		num = num * -1;
	}
	return (num);
}
