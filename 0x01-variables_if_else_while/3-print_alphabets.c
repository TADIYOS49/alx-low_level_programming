#include <stdlib.h>
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
	int i = 65;

	while (i < 91)
	{
		putchar(i);
		putchar(i+32);
	}
	putchar(10);	
	return (0);
}
