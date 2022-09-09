#include <stdio.h>
#include <stdlib.h>

/**
 * main - print single digit numbers
 *
 * Description: print single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 9;

	while (i >= 0)
	{
		putchar((int) i);
		i--;
	}
	putchar(10);
	return (0);
}
