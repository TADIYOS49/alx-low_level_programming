#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while ( i < 123)
	{
		putchar(i);
		i++;
	}
	putchar("\n");
	return (0);
}
