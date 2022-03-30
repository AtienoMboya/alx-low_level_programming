#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int length;

	length = 1;
	if (*s == '\0')
		break;

	s++;
	length++;
	_strlen_recursion(s);

	return (length);
}
