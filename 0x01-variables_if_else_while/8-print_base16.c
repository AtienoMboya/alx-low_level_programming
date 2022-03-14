#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int x;
	char letter;

	for (x = 0 ; x < 10 ; x++)
		putchar((x % 10) + '0');

	for (letter  = 'a' ; letter <= 'f' ; letter++)
		putchar(letter);
	return (0);
}
