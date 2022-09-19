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
			putchar(a[i]);
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(a[i]);
		}
	}
	putchar(10);
}
