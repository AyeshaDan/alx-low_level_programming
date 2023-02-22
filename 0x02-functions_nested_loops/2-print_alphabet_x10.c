#include "main.h"
/**
* print_alphabet_x10 - Print alphabet in lowercase 10 times and new line.
*
* Return: Value 0 means succesful execution.
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

	_putchar('\n');
	i++;
}

}
