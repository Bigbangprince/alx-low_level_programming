#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function to concatenates two strings
 * @s1: String 1.
 * @s2: String 2.
 * @n: n bytes to concatenate.
 *
 * Return: If fail(NULL), if success return a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cout;
	unsigned int strln = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		strln++;

	cout = malloc(sizeof(char) * (strln + 1));

	if (cout == NULL)
		return (NULL);

	strln = 0;

	for (i = 0; s1[i]; i++)
		cout[strln++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		cout[strln++] = s2[i];

	cout[strln] = '\0';

	return (cout);
}
