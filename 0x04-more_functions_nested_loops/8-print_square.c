#include "main.h"
/**
 *print_square - function that prints a square
 *@size: is the size of the square
*/
void print_square(int size)
{
	int h;
	int sq;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
		for (h = 1; h <= size; h++)
		{
			_putchar ('#');
			for (sq = 2; sq <= size; sq++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
}
