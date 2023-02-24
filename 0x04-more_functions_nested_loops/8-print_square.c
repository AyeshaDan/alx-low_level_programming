#include "main.h"
/**
* print_square - Draw a square
* @size: size of the square
* Return: If size is 0 or less, the function should only print a new line
*/
void print_square(int size)
{
	int i;

	if (size < 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
