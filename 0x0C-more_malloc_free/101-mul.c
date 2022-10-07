#include "main.h"
#include <stdio.h>
#include <stdlib.h>



int main (int argc, char *argv[])
{
	int i, j, mul;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i <= 2; i++)
	{
		j = 0;
		while ( argv[i][j] != '\0')
		{
			if (argv[i][j] > 48 && argv[i][j] < 57)
			{
				continue;
			}
			else 
			{
				printf("Error\n");
				exit(98);
			}
			j++;
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}	
