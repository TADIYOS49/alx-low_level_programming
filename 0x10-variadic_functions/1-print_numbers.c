#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a line
 * @n: number of parameters
 * @separator: separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(args, int));
			break;
		}
		printf("%d", va_arg(args, int));
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
