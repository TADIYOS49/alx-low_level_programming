#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * puts2 - modulo
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	putchar(10);
}
