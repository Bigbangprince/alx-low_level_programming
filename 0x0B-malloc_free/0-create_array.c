#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters.
 * @size: size of the array created.
 * @c: stored characters.
 *
 * Return: pointer of an array of character(success), NULL(fail)
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(char) * size);

	if (ch == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
