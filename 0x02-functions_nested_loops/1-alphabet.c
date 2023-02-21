#include <stdio.h>
#include "main.h"
/**
* main - Print the alphabet in lowercase, followed by a new line.
*
* Return: Value 0 means succesful execution.
*/

void print_alphabet(void);

int main()
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
