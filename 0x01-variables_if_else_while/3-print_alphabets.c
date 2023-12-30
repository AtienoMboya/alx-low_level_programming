#include <stdio.h>
/**
 * main - prints the alphabet in lowercase then in uppercase
 *
 * Description: putchar can only be used twice
 *
 * Return: 0 upon completion
 */
int main(void)
{
	int x, y;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
