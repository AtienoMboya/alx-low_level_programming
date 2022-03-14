#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char charType;
	int intType;
	long int lint;
	long long int llint;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lint));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(llint));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
