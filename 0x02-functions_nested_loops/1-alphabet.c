#include "main.h"
void print_alphabet(void)

/**
* main - Print the alphabet in lowercase, followed by a new line.
*
* Return: Value 0 means succesful execution.
*/
int main(void)
{
	{
		char print_alphabet = 'a';

		while (print_alphabet <= 'z')
		{
			putchar(print_alphabet);
			print_alphabet++;
		}

		putchar('\n');
	}

    	return (0);
}
