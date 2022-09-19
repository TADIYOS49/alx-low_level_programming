#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _puts - displays the string
 * @str: string
 * Return: void
 */


void _puts(char *str)
{
	int len = strlen(str);
	int i = 0;

	for (i = 0; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}
