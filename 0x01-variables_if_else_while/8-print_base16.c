#include <stdio.h>
/**
 * main - prints all numbers of base 16
 *
 * Return: 0 upon completion
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
		putchar(x);
	for (x = 'a'; x < 'g'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
