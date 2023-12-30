#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Description: excludes q and e
 *
 * Return: 0 upon completion
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
			putchar(x);
	}
	putchar('\n');
	return (0);
}
