#include <string.h>
#include "main.h"

/**
 * _puts - displays the string
 * @str: string
 * Return: void
 */


void _puts(char *str)
{
	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar("\n");
}
