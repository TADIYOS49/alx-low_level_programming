#include <stdio.h>
#include <stdlib.h>

/**
 * main - print lowercase alphabet
 *
 * Description: print lowercase reverse
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
