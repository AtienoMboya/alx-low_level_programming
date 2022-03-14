#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int x;

	for (x = 'a' ; x <= 'z' && (x != 'q' && x != 'e') ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
