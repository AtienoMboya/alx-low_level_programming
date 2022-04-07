#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first number of bytes of s2
 *
 * Return: pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0 ; s1[index] ; index++)
		length++;

	concat = malloc(sizeof(char) * (length + 1));

	if (concat == NULL)
		return (NULL);

	length = 0;

	for (index = 0 ; s1[index] ; index++)
		concat[length++] = s1[index];

	for (index = 0 ; s2[index] ; index++)
		concat[length++] = s2[index];

	concate[length] = '\0';

	return (concat);
}
