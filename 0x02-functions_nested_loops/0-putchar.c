#include "main.h"
int putchar(int c);

/**
* main - Print _putchar, followed by a new line.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	int letter;

	letter = '_';
	putchar(letter);
	letter = 'p';
	putchar(letter);
	letter = 'u';
	putchar(letter);
	letter = 't';
	putchar(letter);
	letter = 'c';
	putchar(letter);
	letter = 'h';
	putchar(letter);
	letter = 'a';
	putchar(letter);
	letter = 'r';
	putchar(letter);
	putchar('\n');

	return (0);
}
