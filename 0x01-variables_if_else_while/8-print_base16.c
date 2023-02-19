#include <stdio.h>
/**
* main - Print numbers of base 16 in lowercase, followed by a new line.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	int dig = '0';
	int letter = 'a';

	while (dig <= '9')
	{
		putchar(dig);
		dig++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
