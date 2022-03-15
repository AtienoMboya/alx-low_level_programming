#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lower case
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		(_putchar(c) * 10);
	putchar('\n');
}
