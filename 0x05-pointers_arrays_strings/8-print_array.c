#include <string.h>
#include "main.h"

/**
 * print_array - iterate through array
 * @n: integer
 * @a: string
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			_putchar(a[i]);
			_putchar(44);
			_putchar(32);
		}
		else
		{
			_putchar(a[i]);
		}
	}
	putchar(10);
}
