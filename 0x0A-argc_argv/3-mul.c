#include <stdio.h>

/**
 * main - print product of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error");
		return (1);
	}
	else
	{
		mul = argv[1] * argv[2];
	}
	return (0);
}
