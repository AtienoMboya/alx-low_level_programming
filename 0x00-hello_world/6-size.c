#include <stdio.h>
/**
 * main-Entry
 *
 * Description - To display the sizes of int etc
 *
 * Return - Always 0 (success)
 **/
int main(void)
{
	char charType;
	int intType;
	long int lint;
	long long int llint;
	float floatType;

	printf("Size of a char: %ld\n byte(s)", sizeof(charType));
	printf("Size of an int: %ld\n byte(s)", sizeof(intType));
	printf("Size of a long int: %ld\n byte(s)", sizeof(lint));
	printf("Size of a long long int: %ld\n byte(s)", sizeof(llint));
	printf("Size of a float: %ld\n byte(s)", sizeof(floatType));

	return (0);
}
