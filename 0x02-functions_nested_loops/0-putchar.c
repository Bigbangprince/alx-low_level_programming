#include "main.h"
/**
 * main - Entry point
 * prints _putchar as a message
 *
 * main prints _putchar
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int main(void)
{
	int str[] = {45, 112, 117, 116, 99, 104, 97, 114};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
