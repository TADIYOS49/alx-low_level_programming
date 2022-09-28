#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 * Return: pointer
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s);

	putchar(*(s + len - 1));
	_print_rev_recursion((s + len - 2));
}
