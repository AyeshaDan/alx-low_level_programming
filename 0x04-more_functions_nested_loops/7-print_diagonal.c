#include "main.h"
/**
* print_diagonal - Draws a diagonal line in the terminal
* @n: number of times the character \ should be printed
* Return: If n is 0 or less, the function should only print \n
*/
void print_diagonal(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
