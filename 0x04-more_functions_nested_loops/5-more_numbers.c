#include "main.h"
/**
 *more_numbers - function that prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
	int n;
	int n10 = 0;

	for (n10 = 1; n10 <= 10; n10++)
	{
		for (n = 0; n <= 14; n++)
	{
		if (n >= 10)
		{
			_putchar((n / 10) + '0');
		}
		_putchar ((n % 10) + '0');
	}
	_putchar('\n');
	}
}
