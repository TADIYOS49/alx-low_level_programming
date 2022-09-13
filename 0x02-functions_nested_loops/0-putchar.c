#include <stdio.h>
#include "main.h"

/**
 * main - display _putchar
 *
 * Description: display a string
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char text[7] = "_putchar";
	int i =0;

	while (i < 8)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar("\n");
	return (0);
}
