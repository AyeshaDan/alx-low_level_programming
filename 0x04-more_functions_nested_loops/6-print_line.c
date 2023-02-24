#include "main.h"
/**
* print_line - Draws a straight line in the terminal
* @n: number of times the character _ should be printed
* Return: If n is 0 or less, the function should only print \n
*/
void print_line(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
