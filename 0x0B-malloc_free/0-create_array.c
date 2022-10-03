#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: char to initialize array with
 * Return: NULL if size = 0, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	return (arr);
}
