#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */


void print_alphabet_x10(void)
{
	int i = 0;
	int j = 97;

	while (i < 10)
	{
		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar(10);
	}
}
