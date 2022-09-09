#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	i = 97;

	while (i < 103)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
