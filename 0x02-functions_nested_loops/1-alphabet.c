#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase followed by new line
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	int x;

	for (x = 97; x < 123; x++)
		_putchar(x);
	_putchar('\n');
}
