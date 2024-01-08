#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 *
 * Return: 0 upon return
 */
int main(void)
{
	int x, y;

	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			if (x != y)
			{
				putchar(x);
				putchar(y);
