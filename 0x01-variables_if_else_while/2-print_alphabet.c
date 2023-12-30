#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Description: using only putchar
 *
 * Return: 0 upon completion
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
