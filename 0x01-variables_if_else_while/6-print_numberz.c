#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Description: only use putchar
 *
 * Return: 0 upon completion
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
