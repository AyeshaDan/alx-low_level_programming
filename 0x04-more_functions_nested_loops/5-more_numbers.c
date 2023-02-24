#include "main.h"
/**
* more_numbers - Prints 0 to 14, 10 times with new line
* @n: The value within the loop
* Return: Successful execution of void more_numbers(void) function
*/
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		for (i = '0'; i <= '14'; i++)
		{
			_putchar(i);
		}

	_putchar('\n');
	i++;
	}

}
