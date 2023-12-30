#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number
 *
 * Description: prints out the last digit
 *
 * Return: 0 upon completion
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() -  RAND_MAX / 2;
	if (abs(n % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, abs(n % 10));
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, abs(n % 10));
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, abs(n % 10));
	return (0);
}
