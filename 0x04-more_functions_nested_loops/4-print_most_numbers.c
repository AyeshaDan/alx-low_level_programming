#include "main.h"
/**
* print_most_numbers - Print numbers from 0 to 9, excluding 2 and 4
*
* Return: Value 0 means succesful execution.
*/
int main(void)
{
	int print_most_numbers = '0';

	while (print_most_numbers <= '9')
	{
		if (print_most_numbers == '2' || print_most_numbers == '4')
			{
				print_most_numbers++;
				continue;
			}
			_putchar(print_most_numbers);
			print_most_numbers++;
	}

	_putchar('\n');

	return (0);
}
