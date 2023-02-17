#include <stdio.h>
/**
* main - Print alphabet in lowercase, excluding q and e, with a new line.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	char lowercase_letter = 'a';

	while (lowercase_letter <= 'z')
	{
		if (lowercase_letter == 'q' || lowercase_letter == 'e')
		{
		lowercase_letter++;
		continue;
		}
		putchar(lowercase_letter);
		lowercase_letter++;
	}

	putchar('\n');

	return (0);
}
