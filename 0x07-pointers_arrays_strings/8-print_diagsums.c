#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i][j];
			}
			if ((i + j) == size - 1)
			{
				sum2 = sum2 + a[i][j];
			}
		}
	}
	printf("%d, ", sum1);
	printf("%d", sum2);
}
