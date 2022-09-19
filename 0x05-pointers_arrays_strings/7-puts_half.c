#include <string.h>
#include "main.h"
#include <stdio.h>


/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i;
	int n = len / 2;

	for (i = 0; i < n - 1; i++)
	{
		_putchar(str[i]);
	}
	putchar(10);
}
