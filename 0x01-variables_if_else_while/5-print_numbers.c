#include <stdio.h>
#include <stdlib.h>
/**
 * main - print iteration
 *
 * Description: print from 0 to 10
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar(10);
	return (0);
}
