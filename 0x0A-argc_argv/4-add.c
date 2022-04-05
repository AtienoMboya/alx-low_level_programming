#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: If one of the numbers contains symbols that are non digits 0
 *	Otherwise 0
 */
int main(int argc, char *argv[])
{
	int i;

	unisgned int k, sum = 0;

	char *e;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			e = argv[i];

			for (k = 0 ; k < strlen(e) ; k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0)
}
