#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first pointer to an integer
 * @b: second pointer to an integer
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
