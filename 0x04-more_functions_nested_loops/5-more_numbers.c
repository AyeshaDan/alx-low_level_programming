#include "main.h"
/**
* more_numbers - Prints 0 to 14, 10 times with new line
* 
* Return: Successful execution of void more_numbers(void) function
*/
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;

		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}

	_putchar('\n');
	i++;
}

}
