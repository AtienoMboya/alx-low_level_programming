#include <stdio.h>
#include "main.c"
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: the matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int index, sum1, sum2;

	for (index = 0 ; index < size ; index++)
	{
		sum1 += a[index];
		a += size;
	}
	a -= size;

	for (index = 0 ; index < size ; index++)
	{
		sum2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
