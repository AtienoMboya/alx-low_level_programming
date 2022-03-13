#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int x;

	for (x = 'a' ; x <= 'z' ; x++)
		do
			putchar(x);
		while (x != 'q' || x != 'e');
	putchar('\n');
	return (0);
}
