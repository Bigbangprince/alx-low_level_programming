#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *str1;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	str1 = (char *)malloc(sizeof(char) * (a + 1));

	if (str1 == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		str1[b] = str[b];

	return (str1);
}
