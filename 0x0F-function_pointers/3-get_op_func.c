#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - .......
 * @s: .......
 *
 * Return: ....
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"=", op_add}, {"-", op_sub}
