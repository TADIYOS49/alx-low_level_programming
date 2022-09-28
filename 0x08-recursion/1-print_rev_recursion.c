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
	_print_rev_recursion(s + 1);
	putchar(*s);
}
