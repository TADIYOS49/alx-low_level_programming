#include "main.h"

/**
 * swap_int - swap values using pointers
 * @a: pointer
 * @b: pointer
 * Return: void
 */


void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
