#include <stdio.h>

/**
 * main - prints all the arguments with new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */


int main(int argc, char **argv)
{
	int i = 1;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
