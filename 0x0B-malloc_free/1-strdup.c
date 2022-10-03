#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates the string
 * @str: string
 * Return: NULL if size = 0, pointer to array
 */

char *_strdup(char *str)
{
	char *arr;
	int size;
	int i;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(arr + i) = str[i];
	}
	return (arr);
}
