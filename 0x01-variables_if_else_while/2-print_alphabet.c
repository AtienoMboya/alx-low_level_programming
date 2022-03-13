#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	putchar('\n');
	return (0);
}
