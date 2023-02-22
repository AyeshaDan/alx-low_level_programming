#include "main.h"
/**
* main - Print the alphabet in lowercase, followed by a new line.
*
* Return: Value 0 means succesful execution.
*/
int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	char print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
	{
		putchar(print_alphabet);
	}
	putchar('\n');
}
