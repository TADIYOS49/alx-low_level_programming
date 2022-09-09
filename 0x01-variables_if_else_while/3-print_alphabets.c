#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet both case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	i = 65;

	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
