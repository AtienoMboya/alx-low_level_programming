#include <stdio.h>
/**
 * main-Entry
 *
 * return - Always 0 (success)
 */
int main(void)
{
	char charType;
	int intType;
	long int lint;
	long long int llint;
	float floatType;

	printf("Size of a char: %ld\n", sizeof(charType));
	printf("Size of an int: %ld\n", sizeof(intType));
	printf("Size of a long int: %ld\n", sizeof(lint));
	printf("Size of a long long int: %ld\n", sizeof(llint));
	printf("Size of a float: %ld\n", sizeof(floatType));
	/**
	 * return - Always 0 (success)
	 */

	return (0);
}
