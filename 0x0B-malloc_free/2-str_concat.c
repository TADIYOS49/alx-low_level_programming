#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatination of two arrays
 * @s1: string one
 * @s2: string two
 * Return: NULL if size = 0, pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	len1 = strlen(s1);
	len2 = strlen(s2);
	char *arr;
	int i;
	int j = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	arr = (char *) malloc((len1 + len2 + 2) * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (len1 + len2); i++)
	{
		if (i < len1)
			*(arr + i) = s1[i];
		else
		{
			*(arr + i) = s2[j];
			j++;
		}
	}
	return (arr);
}
