#include "main.h"
/**
* print_numbers - Print numbers from 0 to 9
*
* Return: Value 0 means succesful execution.
*/
void print_numbers(void)
{
	int print_numbers;

	for (print_numbers = '0'; print_numbers <= '9'; print_numbers++)
	{
		_putchar(print_numbers);
	}

	_putchar('\n');
}
