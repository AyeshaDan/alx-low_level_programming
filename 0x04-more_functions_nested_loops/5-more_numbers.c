#include "main.h"
/**
* more_numbers - Prints 0 to 14, 10 times with new line
* 
* Return: Successful execution of void more_numbers(void) function
*/
void more_numbers(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		b = 0;

		for (b = 0; b <= 14; b++)
		{
			_putchar(b);
		}

	_putchar('\n');
	a++;
}

}
