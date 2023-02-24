#include <stdio.h>
#include "main.h"
/**
* more_numbers - Prints 0 to 14, 10 times with new line
* 
* Return: Successful execution of function
*/
void more_numbers(void)
{
	int i = 0;
	int c;

	while (i < 10)
	{
		c = 0;

		for (c = 0; c <= 14; c++)
		{
			_putchar(c);
		}

	_putchar('\n');
	i++;
	}

}
