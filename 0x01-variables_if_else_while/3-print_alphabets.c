#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (no return)
 */
int main(void)
{
	int x;

	for (x = 'A' ; x <= 'Z' ; x++)
		putchar(x);
	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
